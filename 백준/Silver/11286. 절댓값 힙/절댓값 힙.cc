#include <bits/stdc++.h>
using namespace std;

class compare {
public:
	bool operator() (int a, int b) {
		if (abs(a) != abs(b)) return abs(a) > abs(b);
		return a > 0 && b < 0;
	}
};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x;
	cin >> n;

	priority_queue<int, vector<int>, compare> pq;

	for (int i = 0; i< n; i++) {
		cin >> x;
		if (x == 0) {
			if (pq.empty()) cout << 0 << "\n";
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(x);
		}
	}
}