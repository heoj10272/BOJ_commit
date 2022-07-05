#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll a[4005];
ll b[4005];
ll c[4005];
ll d[4005];

vector<ll> sum1;
vector<ll> sum2;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum1.push_back(a[i] + b[j]);
			sum2.push_back(c[i] + d[j]);
		}
	}

	sort(sum1.begin(), sum1.end());
	sort(sum2.begin(), sum2.end());

	int op;
	int ed;
	ll cnt = 0;
	int sum_size = sum2.size();

	for (int i = 0; i < sum_size; i++) {
		op = lower_bound(sum1.begin(), sum1.end(), -sum2[i]) - sum1.begin();
		ed = upper_bound(sum1.begin(), sum1.end(), -sum2[i]) - sum1.begin();
		cnt += (ed - op);
	}

	cout << cnt;
}
