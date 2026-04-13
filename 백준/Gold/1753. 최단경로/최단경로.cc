#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int V, E, K;
    cin >> V >> E;
    cin >> K;

    vector<vector<pair<int, int>>> graph(V + 1);

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    vector<int> dist(V + 1, INF);

    // {현재까지의 비용, 정점}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[K] = 0;
    pq.push({0, K});

    while (!pq.empty()) {
        auto [curCost, cur] = pq.top();
        pq.pop();

        // 이미 더 짧은 거리로 방문된 적이 있으면 스킵
        if (curCost > dist[cur]) continue;

        for (auto [next, weight] : graph[cur]) {
            int nextCost = curCost + weight;

            if (dist[next] > nextCost) {
                dist[next] = nextCost;
                pq.push({nextCost, next});
            }
        }
    }

    for (int i = 1; i <= V; i++) {
        if (dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << '\n';
    }

    return 0;
}