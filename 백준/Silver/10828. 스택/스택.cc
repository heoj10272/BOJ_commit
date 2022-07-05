#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;
string s;
int num;

void push(int x) {
	dat[pos] = x;
	pos++;
}

int pop() {
	if (pos != 0) {
		pos--;
		return dat[pos];
	}
	else {
		return -1;
	}
}

int top() {
	if (pos == 0) {
		return -1;
	}
	else {
		return dat[pos - 1];
	}
}

int size() {
	return pos;
}

int empty() {
	if (pos == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "push") {
			cin >> num;
			push(num);
		}
		else if (s == "pop") {
			cout << pop() << "\n";
		}
		else if (s == "top") {
			cout << top() << "\n";
		}
		else if (s == "empty") {
			cout << empty() << "\n";
		}
		else if (s == "size") {
			cout << size() << "\n";
		}
	}
}