#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;

    int d, e;
    cin >> d >> e;

    int min_ham = min(min(a, b),c);
    int min_drink = min(d, e);

    cout << min_ham + min_drink - 50;
}