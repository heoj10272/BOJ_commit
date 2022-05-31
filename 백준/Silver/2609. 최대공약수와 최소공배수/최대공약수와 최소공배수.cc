#include <bits/stdc++.h>
#include <numeric>
using namespace std;

vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << "\n" << lcm(a, b);
}