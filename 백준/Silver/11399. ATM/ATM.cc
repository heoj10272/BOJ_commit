#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int tmp;

    for (int i = 0; i < n;i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    for (int i = 0;i < n;i++) {
        //cout << v[i] * (n - i) << "\n";
        sum += v[i] * (n - i);
    }

    cout << sum;
}