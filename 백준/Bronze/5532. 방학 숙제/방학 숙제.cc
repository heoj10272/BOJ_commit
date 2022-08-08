#include <iostream>
using namespace std;
int main() {
    int l, a, b, c, d, res1, res2;
    cin >> l >> a >> b >> c >> d;
    res1 = a / c;
    a %= c;
    if (a > 0) res1++;
    
    res2 = b / d;
    b %= d;
    if (b > 0) res2++;
    printf("%d\n", res1 < res2 ? l - res2 : l - res1);
}