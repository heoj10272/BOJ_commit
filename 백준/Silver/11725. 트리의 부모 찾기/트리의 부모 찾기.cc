#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 100001
int par[MAX];
vector<int> tree[MAX];

void dfs(int x) {
	for (int i = 0; i < tree[x].size(); i++) {
		if (par[tree[x][i]] == 0) {
			par[tree[x][i]] = x;
			dfs(tree[x][i]);
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc = 2;

	int n;
	cin >> n;

	for (int i = 0; i < n-1; i++) {
		int x, y;
		cin >> x >> y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}
	dfs(1);

	for (int i = 2; i <= n; i++) {
		cout << par[i] << "\n";
	}
}
