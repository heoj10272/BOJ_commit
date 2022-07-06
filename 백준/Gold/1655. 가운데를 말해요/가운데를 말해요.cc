#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	priority_queue<int, vector<int>, less<int>> pq1; // 최대 힙
	priority_queue<int, vector<int>, greater<int>> pq2; // 최소 힙

	int n;
	cin >> n;

	int tmp;

	while (n--) {
		cin >> tmp;

		if (pq1.size() == pq2.size()) {
			if (pq1.empty()) {
				pq1.push(tmp);
			}
			else {
				if (tmp > pq2.top()) {
					pq1.push(pq2.top());
					pq2.pop();
					pq2.push(tmp);
				}
				else {
					pq1.push(tmp);
				}
			}
		}
		else if (pq1.size() == pq2.size()+1) {
			if (tmp < pq1.top()) {
				pq2.push(pq1.top());
				pq1.pop();
				pq1.push(tmp);
			}
			else {
				pq2.push(tmp);
			}
		}
		cout << pq1.top() << "\n";
	}
}
