#include <bits/stdc++.h>
using namespace std;

long long arr[95];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	arr[0] = 0;
	arr[1] = 1;

	int n;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[n];
}