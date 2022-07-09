#include <bits/stdc++.h>
using namespace std;

vector<int> v;
vector<int> v1;
vector<char> v2;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int s_length = s.length();

    int flag = 0;
    string number = "";

    for (int i = 0; i < s_length;i++) {
        if (s[i] == '-' || s[i] == '+') {
            for (int j = flag;j < i;j++) {
                number += s[j];
            }
            v1.push_back(stoi(number));
            v2.push_back(s[i]);
            flag = i + 1;
            number = "";
        }
        else if (i == s_length - 1) {
            for (int j = flag;j <= i;j++) {
                number += s[j];
            }
            v1.push_back(stoi(number));
        }
    }
    //for (auto e : v1) cout << e << " "; // 숫자
    //cout << "\n";
    //for (auto e : v2) cout << e << " "; // 부호
    //cout << "\n";

    int sum = v1[0];

    int size = v2.size();
    bool flag_1 = false;
    int flag_minus = 0;

    for (int i = 0;i < size;i++) {
        if (v2[i] == '+' && flag_1 == false) {
            sum += v1[i + 1];
        }
        else if (v2[i] == '-' && flag_1 == false) {
            flag_1 == true;
            for (int j = i; j < size;j++) {
                sum -= v1[j + 1];
            }
            break;
        }
        if (flag_1 == true) {
            break;
        }
    }

    cout << sum;
}