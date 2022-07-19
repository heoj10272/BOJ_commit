#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	while (n--) {
		string pw;
		cin >> pw;
		if (pw.size() >= 6 && pw.size() <= 9) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
}
