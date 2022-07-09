#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> v;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	int ans = 0;

	int tmp;
	for (int i = 0; i < n;i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	int v_size = v.size();
	for (int i = v_size-1;i >= 0;i--) {
		if (k / v[i] > 0) {
			ans += (k / v[i]);
			k = k % v[i];
		}
		else {
			continue;
		}
	}
	cout << ans;
}
