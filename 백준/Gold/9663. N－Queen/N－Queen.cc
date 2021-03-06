#include <bits/stdc++.h>
using namespace std;

int n;
int isused1[20];
int isused2[30]; // x+y
int isused3[30]; // x-y+n-1
int cnt = 0;

void func(int cur) {

    if (cur == n) {
        cnt++;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (isused1[i] || isused2[i + cur] || isused3[i - cur + n - 1]) continue;
        isused1[i] = 1;
        isused2[i + cur] = 1;
        isused3[i - cur + n - 1] = 1;
        func(cur + 1);
        isused1[i] = 0;
        isused2[i + cur] = 0;
        isused3[i - cur + n - 1] = 0;
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    func(0);
    cout << cnt;
}