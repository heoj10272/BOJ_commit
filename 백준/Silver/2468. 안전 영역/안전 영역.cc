#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int board[105][105];
int vis[105][105];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

vector<int> earth_height; // 땅 높이 저장할 벡터

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// 한 변의 길이 변수 선언
	int n;

	// 해수면 변수 선언
	// 땅의 높이는 1 이상 100 이하
	int sea_height;

	// 땅의 높이 변수 선언
	int earth_height_tmp;

	cin >> n; // 삼성국 한 변의 길이 N

	int ans = 1; // 구역 갯수
	int ans_tmp = 0; // 임시 구역 갯수

	queue<pair<int, int> > Q; // 큐 생성

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> earth_height_tmp;
			board[i][j] = earth_height_tmp; // 삼성국의 땅의 높이 입력
			earth_height.push_back(earth_height_tmp); // 높이 벡터 저장
		}
	}

	// 정렬 : NlogN
	sort(earth_height.begin(), earth_height.end());

	//// Debugging : 정렬 디버깅
	//cout << "정렬됨 : ";
	//for (auto e : earth_height) cout << e << " ";
	//cout << "\n\n";

	// 중복 원소 제거 : logN
	earth_height.erase(unique(earth_height.begin(), earth_height.end()), earth_height.end()); // 중복 원소 제거

	//// Debugging : 중복 원소 제거
	//cout << "지면 높이 : ";
	//for (auto e : earth_height) cout << e << " ";
	//cout << "\n\n";

	int vector_size = earth_height.size();

	// vector size만큼 반복
	for (int z = 0; z < vector_size; z++) {
		sea_height = earth_height[z];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] > sea_height && vis[i][j] != 1) {
					Q.push({ i,j });
					vis[i][j] = 1;
					ans_tmp++;
				}
				while (!Q.empty()) {
					auto cur = Q.front(); Q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || nx >= n || ny < 0 || ny >= n || vis[nx][ny] != 0 || board[nx][ny] <= sea_height) continue;
						vis[nx][ny] = 1;
						Q.push({ nx, ny });
					}
				}
			}
		}

		//// Debugging : 해수면 높이 출력
		//cout << "해수면 높이 : " << sea_height << "\n";

		//// Debugging : vis 출력
		//cout << "vis 출력 : \n";
		//for (int i = 0; i < n; i++) {
		//	for (int j = 0; j < n; j++) {
		//		cout << vis[i][j] << " ";
		//	}
		//	cout << "\n";
		//}
		//cout << "\n";

		//// Debugging : 구역 갯수 출력
		//cout << "구역 갯수 : " << ans_tmp << "\n\n";

		// 최대 구역 갯수 갱신
		if (ans < ans_tmp) ans = ans_tmp;

		// 임시 구역 갯수 초기화
		ans_tmp = 0;

		// vis 클리어
		for (int i = 0; i < n; i++) {
			memset(vis[i], 0, sizeof(int) * n);
		}
	}

	// 최대 구역 갯수 출력
	cout << ans << "\n";

	return 0;
}