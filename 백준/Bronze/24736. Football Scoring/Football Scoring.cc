#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[10000][16]; // 날짜당 경우의 수 dp

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc = 2;

	int t, f, s, p, c;
	cin >> t >> f >> s >> p >> c;
	cout << t * 6 + f * 3 + s * 2 + p * 1 + c * 2 << " ";
	cin >> t >> f >> s >> p >> c;
	cout << t * 6 + f * 3 + s * 2 + p * 1 + c * 2;
}
