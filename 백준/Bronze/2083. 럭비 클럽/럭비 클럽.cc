#include <bits/stdc++.h>
using namespace std;

vector<int> v1;
vector<int> v2;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int a, b;

    while (1) {
        cin >> s >> a >> b;
        if (s == "#") {
            return 0;
        }
        if (a > 17 || b >= 80) {
            cout << s << " Senior\n";
        }
        else {
            cout << s << " Junior\n";
        }
    }
}