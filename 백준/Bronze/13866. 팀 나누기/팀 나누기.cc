#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int ans = a + d - b - c;

    if (ans < 0) {
        cout << -ans;
    }
    else {
        cout << ans;
    }
}