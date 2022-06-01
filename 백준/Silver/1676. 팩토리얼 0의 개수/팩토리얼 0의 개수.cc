#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    int count = 0;
    
    for (int i = 1; i <= n; i++) {
        int num = i;
        while (1) {
            if (num % 5 == 0) {
                num /= 5;
                count++;
            }
            else break;
        }
    }

    cout << count;
}