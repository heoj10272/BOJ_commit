#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> v;

vector<double> v1;
vector<int> v2;
vector<int> ans;
int main() {
	int n;
	cin >> n;
	
	double tmp;
	double sum = 0;

	int often = 0;
	int often_tmp = 0;
	int often_value;
	for (int i = 0; i < n;i++) {
		cin >> tmp;
		v.push_back(tmp);
		sum += tmp;
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n;i++) {
		if (i == 0) {
			v1.push_back(v[i]);
			v2.push_back(1);
		}
		else {
			if (v[i] == v1.back()) {
				v2.back() = v2.back() + 1;
			}
			else {
				v1.push_back(v[i]);
				v2.push_back(1);
			}
		}
	}

	int k = *max_element(v2.begin(), v2.end());
	int v2_size = v2.size();
	for (int i = 0; i < v2_size;i++) {
		if (v2[i] == k) {
			ans.push_back(i);
		}
	}

	//cout << sum / n << "\n";
	int round_sum = round(sum / n);
	if (round_sum == -0) {
		cout << 0 << "\n";
	}
	else {
		cout << round(sum / n) << "\n";
	}
	cout << v[n / 2] << "\n";
	if (ans.size() >= 2) {
		cout << v1[ans[1]] << "\n";
	}
	else {
		cout << v1[ans[0]] << "\n";
	}
	cout << v[n - 1] - v[0] << "\n";
}