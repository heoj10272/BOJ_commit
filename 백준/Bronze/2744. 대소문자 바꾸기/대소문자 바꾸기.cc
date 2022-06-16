#include <bits/stdc++.h>	
using namespace std;

int board1[101][101];
int board2[101][101];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	int s_size = s.length();

	for (int i = 0; i < s_size; i++) {
		if (s[i] >= 97 && s[i] <= 122) {
			s[i] -= 32;
		}
		else {
			s[i] += 32;
		}
	}
	cout << s;
}