#include <bits/stdc++.h>	
using namespace std;

int num[31];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;

	for (int i = 1; i <= 28; i++) {
		cin >> x;
		num[x] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (num[i] != 1) {
			cout << i << "\n";
		}
	}
	
}