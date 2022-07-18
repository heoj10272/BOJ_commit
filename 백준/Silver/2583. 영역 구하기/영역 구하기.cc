#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int board[105][105];
int vis[105][105];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

vector<int> area;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, k;
	cin >> m >> n >> k;

	int x1, y1, x2, y2;

	for (int i = 0; i < k; i++) {
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = y1; j < y2; j++) {
			for (int q = x1; q < x2; q++) {
				board[j][q] = 1;
			}
		}
	}

	queue<pair<int, int>> Q;
	int ans = 0;
	int howbig = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			howbig = 0;

			if (board[i][j] == 0 && vis[i][j] == 0) {
				Q.push({ i, j });
				vis[i][j] = 1;
				howbig = 1;
				//cout << "start : " << i << " " << j << "\n";
				ans++;
			}

			while (!Q.empty()) {
				auto cur = Q.front(); Q.pop();
				for (int p = 0; p < 4; p++) {
					int nx = cur.second + dx[p];
					int ny = cur.first + dy[p];
					if (nx < 0 || ny < 0 || nx >= n || ny >= m || vis[ny][nx] != 0 || board[ny][nx] != 0) continue;
					vis[ny][nx] = 1;
					howbig++;
					Q.push({ ny,nx });
					//cout << "board : \n";
					//for (int t = 0; t < m; t++) {
					//	for (int l = 0; l < n; l++) {
					//		cout << board[t][l] << " ";
					//	}
					//	cout << "\n";
					//}
					//cout << "\n";
					//cout << "vis : \n";
					//for (int t = 0; t < m; t++) {
					//	for (int l = 0; l < n; l++) {
					//		cout << vis[t][l] << " ";
					//	}
					//	cout << "\n";
					//}
				}
			}

			if (howbig > 0) {
				area.push_back(howbig);
			}
		}
	}

	sort(area.begin(), area.end());
	cout << ans << "\n";
	for (auto e : area) cout << e << " ";

}