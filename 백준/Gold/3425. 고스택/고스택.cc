#include <bits/stdc++.h>	
using namespace std;

vector<string> v;
vector<long long> q;
stack<long long> s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string order;
	long long n; // 숫자 테스트 케이스
	long long  num; // 입력 받는 숫자
	long long num1; // num1 : NUM 명령에서의 입력 값
	long long temp, temp1; // temp : 명령 연산시 temp
	bool iserror = false; // 에러 발생 여부
	long long q_temp; // 큐 임시 연산시 temp

	while (1) {
		q.clear();
		v.clear();
		while (1) {
			cin >> order;
			if (order == "QUIT") return 0;
			if (order == "END") break;
			if (order == "NUM") {
				cin >> num1;
				q.push_back(num1);
				v.push_back(order);
			}
			else {
				v.push_back(order);
			}
		}
		cin >> n;
		while (n--) {
			while (!s.empty()) {
				s.pop();
			}
			cin >> num;
			s.push(num);
			int v_flag = 0;
			for (int i = 0; i < v.size(); i++) {
				if (v[i] == "NUM") {
					s.push(q[v_flag]);
					v_flag++;
				}
				else if (v[i] == "POP") { 
					if (s.empty()) { 
						iserror = true; 
						break; 
					} 
					else { 
						s.pop(); 
					} 
				}
				else if (v[i] == "INV") {
					temp = s.top();
					s.pop();
					s.push(-temp);
				}
				else if (v[i] == "DUP") {
					temp = s.top();
					s.push(temp);
				}
				else if (v[i] == "SWP") {
					temp = s.top();
					s.pop();
					if (s.empty()) {
						iserror = true;
						break;
					}
					temp1 = s.top();
					s.pop();
					s.push(temp);
					s.push(temp1);
				}
				else if (v[i] == "ADD") {
					temp = s.top();
					s.pop();
					if (s.empty()) {
						iserror = true;
						break;
					}
					temp = temp + s.top();
					s.pop();
					if (abs(temp) > 1000000000) {
						iserror = true;
						break;
					}
					//cout << "ADD : " <<  temp << "\n";
					s.push(temp);
				}
				else if (v[i] == "SUB") {
					temp = s.top();
					s.pop();
					if (s.empty()) {
						iserror = true;
						break;
					}
					temp = s.top() - temp;
					s.pop();
					if (abs(temp) > 1000000000) {
						iserror = true;
						break;
					}
					//cout << "SUB : " << temp << "\n";
					s.push(temp);
				}
				else if (v[i] == "MUL") {
					temp = s.top();
					s.pop();
					if (s.empty()) {
						iserror = true;
						break;
					}
					//cout << temp << " : " << s.top() << " = ";
					temp = temp * s.top();
					s.pop();
					if (abs(temp) > 1000000000) {
						iserror = true;
						break;
					}
					//cout << "MUL : " << temp << "\n";
					s.push(temp);
				}
				else if (v[i] == "DIV") {
					temp = s.top();
					if (temp == 0) {
						iserror = true;
						break;
					}
					s.pop();
					if (s.empty()) {
						iserror = true;
						break;
					}
					temp1 = s.top();
					s.pop();
					if ((temp < 0 && temp1 < 0) || (temp > 0 && temp1 > 0)) {
						if ((abs(temp1) / abs(temp)) > 1000000000) {
							iserror = true;
							break;
						}
						//cout << "DIV : " << abs(temp1) / abs(temp) << "\n";
						s.push(abs(temp1) / abs(temp));
					}
					else {
						if ((abs(temp1) / abs(temp)) > 1000000000) {
							iserror = true;
							break;
						}
						//cout << "DIV : " << -(abs(temp1) / abs(temp)) << "\n";
						s.push(-(abs(temp1) / abs(temp)));
					}
				}
				else if (v[i] == "MOD") {
					temp = s.top();
					if (temp == 0) {
						iserror = true;
						break;
					}
					s.pop();
					if (s.empty()) {
						iserror = true;
						break;
					}
					temp1 = s.top();
					s.pop();
					//cout << temp1 << " " << temp << " = "; // temp1 = 3498 / temp = -6
					if (temp1 < 0) {
						if ((abs(temp1) % abs(temp)) > 1000000000) {
							iserror = true;
							break;
						}
						//cout << "MOD : " << -(abs(temp1) % abs(temp)) << "\n";
						s.push(-(abs(temp1) % abs(temp)));
					}
					else {
						if ((abs(temp1) % abs(temp)) > 1000000000) {
							iserror = true;
							break;
						}
						//cout << "MOD : " << (abs(temp1) % abs(temp)) << "\n";
						s.push((abs(temp1) % abs(temp)));
					}
				}
			}

			if (iserror == true || s.size() != 1) {
				cout << "ERROR\n";
				iserror = false;
				continue;
			}
			else {
				cout << s.top() << "\n";
			}
		}
		cout << "\n";
	}
}