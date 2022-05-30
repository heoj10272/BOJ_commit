#include<bits/stdc++.h>
using namespace std;
bool compare(string a, string b) {
	if (a.size() == b.size()) {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] != b[i]) {
				return a[i] < b[i];
			}
		}
	}
	return a.size() < b.size();
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;

	vector<string> v;
	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), compare);

	string before;

	for (int i = 0; i < n; i++) {
		if (v[i] == before) {
			continue;
		}
		cout << v[i] << "\n";
		before = v[i];
	}
}