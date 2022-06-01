#include <bits/stdc++.h>
using namespace std;

int board[21];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int m;
    cin >> m;

    string s;
    int num;

    while (m--) {
        cin >> s;
        if (s == "add") {
            cin >> num;
            if (board[num] != 1) board[num] = 1;
        }
        else if (s == "remove") {
            cin >> num;
            if (board[num] == 1) board[num] = 0;
        }
        else if (s == "check") {
            cin >> num;
            if (board[num] == 1) cout << "1\n";
            else cout << "0\n";
        }
        else if (s == "toggle") {
            cin >> num;
            if (board[num] == 1) board[num] = 0;
            else board[num] = 1;
        }
        else if (s == "all") {
            for (int i = 1; i <= 20; i++) {
                board[i] = 1;
            }
        }
        else if (s == "empty") {
            for (int i = 1; i <= 20; i++) {
                board[i] = 0;
            }
        }
    }
}