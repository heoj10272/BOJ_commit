#include <bits/stdc++.h>
using namespace std;

vector<int> v1;
vector<int> v2;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;

    if (c > a * b) {
        cout << 0;
    }
    else {
        cout << a * b - c;
    }
}