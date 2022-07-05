#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX 1000000000

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll x, y;
	cin >> x >> y;
	ll z = y * 100 / x;
	if (z >= 99) {
		cout << -1;
		return 0;
	}

	ll op, mid, ed;
	op = 0;
	ed = MAX;
	ll temp_z;
	while (op<=ed) {
		mid = (op+ed) / 2;
		temp_z = (y + mid)*100 / (x + mid);
		//cout << temp_z << "\n";
		if (temp_z > z) {
			ed = mid - 1;
		}
		else {
			op = mid + 1;
		}
	}
	cout << op;
}
