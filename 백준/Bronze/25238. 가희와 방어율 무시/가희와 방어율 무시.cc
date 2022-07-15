#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double a, b;
	cin >> a >> b;

	if (a - a * b / 100 >= 100) {
		cout << "0";
	}
	else {
		cout << 1;
	}
}