#include <bits/stdc++.h>	
using namespace std;

vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n;

	int a;

	while (n--) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(),v.end());

	cin >> m;
	while (m--) {
		cin >> a;
		cout << binary_search(v.begin(), v.end(), a) << " ";
	}
}