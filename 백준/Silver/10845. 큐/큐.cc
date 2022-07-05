#include <bits/stdc++.h>	
using namespace std;
queue<int> q;

void push(int x) {
	q.push(x);
}
void pop() {
	if (q.empty()) {
		cout << -1 << "\n";
	}
	else {
		cout << q.front() << "\n";
		q.pop();
	}
}
void size() {
	cout << q.size() << "\n";
}
void empty() {
	if (q.empty()) {
		cout << 1 << "\n";
	}
	else {
		cout << "0\n";
	}
}
void front() {
	if (q.empty()) {
		cout << -1 << "\n";
	}
	else {
		cout << q.front() << "\n";
	}
}
void back() {
	if (q.empty()) {
		cout << -1 << "\n";
	}
	else {
		cout << q.back() << "\n";
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s == "push") {
			int num;
			cin >> num;
			push(num);
		}
		else if (s == "pop") {
			pop();
		}
		else if (s == "size") {
			size();
		}
		else if (s == "empty") {
			empty();
		}
		else if (s == "front") {
			front();
		}
		else {
			back();
		}
	}
}