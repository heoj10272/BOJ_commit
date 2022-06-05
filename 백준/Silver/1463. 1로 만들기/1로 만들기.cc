#include <bits/stdc++.h>	
using namespace std;

int d[1000005];
int ans[3];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	d[1] = 0;

	for (int i = 2; i <= 1000000; i++) {
		ans[0] = { 1000000 };
		ans[1] = { 1000000 };
		ans[2] = { 1000000 };
		if (i % 3 == 0) {
			ans[0] = d[i / 3] + 1;
		}
		if (i % 2 == 0) {
			ans[1] = d[i / 2] + 1;
		}
		ans[2] = d[i - 1] + 1;

		d[i] = min(min(ans[0], ans[1]), ans[2]);
	}

	int num;
	cin >> num;

	cout << d[num];
}