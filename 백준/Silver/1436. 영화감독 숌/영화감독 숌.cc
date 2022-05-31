#include <bits/stdc++.h>	
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int start = 666;
	int index = 0;

	while (n <= 10000) {
		bool num_of_end = false;
		string s = to_string(start);
		int length = s.length();

		for (int i = 0; i < length; i++) {
			if (i>=2) {
				if (s[i - 2] == s[i - 1] && s[i-1] == s[i] && s[i] == '6') {
					num_of_end = true;
				}
			}
		}
		if (num_of_end == true) index++;
		if (index == n) {
			cout << start;
			return 0;
		}
		start++;
	}
}