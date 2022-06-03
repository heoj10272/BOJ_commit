#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second < b.second) {
        return true;
    }
    else if (a.second == b.second) {
        if (a.first < b.first) {
            return true;
        }
        else return false;
    }
    else return false;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {
        int x, y;
        cin >> x >> y;

        v.push_back({ x, y });
    }

    int size = v.size();
    sort(v.begin(), v.end(), compare);

    int ans = 1;
    int end = v[0].second;

    for (int i = 1; i < size; i++) {
        if (v[i].first >= end) {
            end = v[i].second;
            ans++;
        }
    }

    cout << ans;
}