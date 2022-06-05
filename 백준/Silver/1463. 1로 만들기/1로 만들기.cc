#include <bits/stdc++.h>	
using namespace std;

int d[1000005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	d[1] = 0;

	for (int i = 2; i <= 1000000; i++) {
		d[i] = d[i-1] + 1;
		if (i % 3 == 0) {
			d[i] = min(d[i], d[i / 3] + 1);
		}
		if (i % 2 == 0) {
			d[i] = min(d[i], d[i / 2] + 1);
		}
	}
	int num;
	cin >> num;

	cout << d[num];
}