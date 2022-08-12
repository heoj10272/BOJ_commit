#include <bits/stdc++.h>
using namespace std;

vector<int> v1;
vector<int> v2;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for (int i = 0; i < 4; i++) {
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }

    sort(v1.begin(), v1.end());

    for (int i = 0; i < 2; i++) {
        int temp;
        cin >> temp;
        v2.push_back(temp);
    }

    sort(v2.begin(), v2.end());
    int sum = 0;
    sum = v1[3] + v1[2] + v1[1] + v2[1];
    cout << sum;
}