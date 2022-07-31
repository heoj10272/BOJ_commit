#include <iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cost = 5;
    int sum = 0;
    for (int i = 0; i < 6; i++){
        int num;
        cin >> num;
        sum += num;
    }
    cout << sum * cost << "\n";
    return 0;
}