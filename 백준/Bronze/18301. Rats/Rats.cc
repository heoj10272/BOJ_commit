#include <bits/stdc++.h>
using namespace std;
double n1, n2, n12, ans;
int main() {
    cin >> n1 >> n2 >> n12;
    ans = ((n1 + 1)*(n2 + 1) / (n12 + 1)) - 1;
    cout << floor(ans);
}
