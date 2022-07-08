#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	//a.z + b.x, a.y × b.y, a.x + b.z = c.x, c.y, c.z
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	cout << d - c << " " << e / b << " " << f - a;
}