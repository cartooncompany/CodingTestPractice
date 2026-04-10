#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M;
    cin >> N;
    cin >> M;

    vector<vector<pair<int, int>>> graph(N + 1);

    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({c, b});
        graph[b].push_back({c, a});
    }

    vector<bool> visited(N + 1, false);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 1}); // {cost, node}

    int answer = 0;

    while (!pq.empty()) {
        int cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (visited[now]) continue;

        visited[now] = true;
        answer += cost;

        for (auto &next : graph[now]) {
            int nextCost = next.first;
            int nextNode = next.second;

            if (!visited[nextNode]) {
                pq.push({nextCost, nextNode});
            }
        }
    }

    cout << answer << '\n';
    
    return 0;
}