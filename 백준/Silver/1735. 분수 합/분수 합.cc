#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int x, y, z;
	x = a * d + b * c;
	y = b * d;
	z = gcd(x, y);
	cout << x / z << " " << y / z;
}