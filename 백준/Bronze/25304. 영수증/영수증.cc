#include <bits/stdc++.h>	
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;
	int sum = 0;
	int a, b;
	int n;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		sum += a * b;
	}
	if (sum == x) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}