#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin >> s;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int tmp = s[i] - '0';
		sum += pow(tmp, 5);
	}
	cout << sum;
}