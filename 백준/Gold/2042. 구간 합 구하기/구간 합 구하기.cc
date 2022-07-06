#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> arr;
vector<ll> tree_arr;

ll init(int start, int end, int node) {
	if (start == end) return tree_arr[node] = arr[start];

	int mid = (start + end) / 2;
	ll left_result = init(start, mid, node * 2);
	ll right_result = init(mid + 1, end, node * 2 + 1);
	tree_arr[node] = left_result + right_result;
	return tree_arr[node];
}

ll sum(int start, int end, int left, int right, int node) {
	if (left > end || right < start) return 0;
	if (left <= start && end <= right) return tree_arr[node];

	int mid = (start + end) / 2;
	ll left_result = sum(start, mid, left, right, node * 2);
	ll right_result = sum(mid + 1, end, left, right, node * 2 + 1);
	return left_result + right_result;
}

void update(int start, int end, int index, ll diff, int node) {
	if (index < start || index > end) return;
	tree_arr[node] = tree_arr[node] + diff;

	if (start != end) {
		int mid = (start + end) / 2;
		update(start, mid, index, diff, node * 2);
		update(mid + 1, end, index, diff, node * 2 + 1);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	ll n, m, k;
	ll a, b, c;
	cin >> n >> m >> k;
	
	ll tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}

	int tree_height = (int)ceil(log2(n));
	int tree_size = (1 << (tree_height + 1));
	tree_arr.resize(tree_size);
	init(0, n - 1, 1);

	for (int i = 0; i < m + k; i++) {
		cin >> a;
		if (a == 1) {
			cin >> b >> c;
			b--;
			ll diff = c - arr[b];
			arr[b] = c;
			update(0, n - 1, b, diff, 1);
			//int index = b - 1;
			//ll value = c;
			//ll diff = value - arr[index];
			//arr[index] = value;
			//update(0, n - 1, index, diff, 1);
		}
		else if (a == 2) {
			cin >> b >> c;
			b--;
			c--;
			cout << sum(0, n - 1, b, c, 1) << "\n";
		}
	}
}