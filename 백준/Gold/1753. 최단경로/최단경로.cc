#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[300001];

int d[300001];


void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({ 0, start });
    d[start] = 0;
    while (!pq.empty()) {
        int dist = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (d[now] > dist) continue;

        for (int i = 0; i < graph[now].size();i++) {
            int cost = dist + graph[now][i].second;
            if (cost < d[graph[now][i].first]) {
                d[graph[now][i].first] = cost;
                pq.push({ cost,graph[now][i].first });
            }
        }
    }
}
int main(void) {
    int v, e;
    cin >> v >> e;
    int k;
    cin >> k;

    int a, b, c;
    for (int i = 0; i < e;i++) {
        cin >> a >> b >> c;
        graph[a].push_back({ b,c });
    }

    fill(d, d + 300001, INF);
    dijkstra(k);

    for (int i = 1; i <= v;i++) {
        if (d[i] == INF) {
            cout << "INF" << "\n";
        }
        else {
            cout << d[i] << '\n';
        }
    }
}