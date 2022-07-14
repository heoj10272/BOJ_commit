#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> adj[1005];
bool vis[1005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int u, v;

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	int ans = 0;

	for (int i = 1; i <= n; i++) {
		if (vis[i] == 1) continue;
		ans++;
		queue<int> q;
		q.push(i);
		vis[i] = 1;
		while (!q.empty()) {
			int cur = q.front(); q.pop();
			for (auto nxt : adj[cur]) {
				if (vis[nxt] == 1) continue;
				q.push(nxt);
				vis[nxt] = 1;
			}
		}
	}

	cout << ans;
}