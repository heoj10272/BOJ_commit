#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	for (int i = 2; i <= n; i++) {
		v.push_back(i);
	}

	//for (auto e : v) cout << e << " ";
	//cout << "\n";

	int prime;
	int tmp = 0;
	int cnt = 0;
	int v_size = v.size();
	while(!v.empty()) {
		prime = v[0];
		//cout << "prime : " << prime << "\n";
		for (int i = 0; i < v_size; i++) {
			if (( v[i] % prime == 0 ) && ( v[i] != 0 )) {
				//cout << "v[" << i << "] : " << v[i] << "\n";
				cnt++;
				if (cnt == k) {
					cout << v[i];
					return 0;
				}
				v.erase(v.begin() + i);
				v_size--;
				//for (auto e : v) cout << e << " ";
				//cout << "\n";
			}
		}
	}
}