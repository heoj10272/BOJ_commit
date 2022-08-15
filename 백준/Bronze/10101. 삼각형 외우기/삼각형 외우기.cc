#include <bits/stdc++.h>
using namespace std;

vector<int> v1;
vector<int> v2;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "Equilateral";
        return 0;
    }
    else if ((a + b + c) == 180) {
        if (((a == b) || (b == c) || (c == a))) {
            cout << "Isosceles";
        }
        else if ((a != b) && (b != c) && (c != a)) {
            cout << "Scalene";
        }
    }
    else {
        cout << "Error";
    }
}