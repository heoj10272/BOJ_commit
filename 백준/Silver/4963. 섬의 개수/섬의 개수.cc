#include <bits/stdc++.h>
using namespace std;

int board[52][52];
int vis[52][52];
int dy[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dx[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int w, h;
int board_size;
int ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0) {
			return 0;
		}
		ans = 0;
		queue<pair<int, int>> q;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> board[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (board[i][j] == 1 && vis[i][j] != 1) {
					q.push({ i,j });
					vis[i][j] = 1;
					ans++;
				}
				while (!q.empty()) {
					pair<int, int> cur = q.front(); q.pop();
					for (int i = 0; i < 8; i++) {
						int ny = cur.first + dy[i];
						int nx = cur.second + dx[i];
						if (nx < 0 || ny < 0 || nx >= w || ny >= h || vis[ny][nx] != 0 || board[ny][nx] != 1) continue;
						vis[ny][nx] = 1;
						q.push({ ny, nx });
					}
				}
			}
		}
		cout << ans << "\n";
		for (int i = 0; i < h; i++) {
			memset(vis[i], 0, sizeof(int) * w);
		}
	}
}