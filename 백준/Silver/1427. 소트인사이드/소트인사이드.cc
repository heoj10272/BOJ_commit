#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
//#include <bits/stdc++.h>
using namespace std;

vector<char> v;
int main() {
	int n;
	cin >> n;

	string s = to_string(n);
	int s_length = s.length();

	for (int i = 0; i < s_length;i++) {
		v.push_back(s[i]);
	}

	sort(v.begin(), v.end(),greater<int>());

	for (int i = 0;i < s_length;i++) {
		cout << v[i];
	}
}