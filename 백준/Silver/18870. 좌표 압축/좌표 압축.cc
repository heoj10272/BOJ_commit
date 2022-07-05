#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> origin;
vector<int> v;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		origin.push_back(tmp);
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < n; i++) {
		tmp = lower_bound(v.begin(), v.end(), origin[i])-v.begin();
		cout << tmp << " ";
	}
}
