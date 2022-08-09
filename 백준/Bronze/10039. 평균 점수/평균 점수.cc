#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int tmp;
		cin >> tmp;
		if (tmp < 40) tmp = 40;
		sum += tmp;
	}
	cout << sum / 5;
}
