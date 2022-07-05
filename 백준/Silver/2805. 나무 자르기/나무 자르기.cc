#include <bits/stdc++.h>
using namespace std;

vector<int> tree;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	int temp;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		tree.push_back(temp);
	}

	int top = 0;
	int bot = 0;
	int mid = 0;
	int result = 0;
	
	top = *max_element(tree.begin(), tree.end());

	while (bot < top) {
		long long sum = 0;
		mid = (top + bot) / 2;
		for (int i = 0; i < n; i++) {
			if (tree[i] - mid > 0) {
				sum += (tree[i] - mid);
			}
		}
		if (sum < m) {
			top = mid;
		}
		else {
			result = mid;
			bot = mid+1;
		}
	}
	cout << result;
}