#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1001];
bool visited[1001];
int N, M, V;

void dfs(int now) {
    visited[now] = true;
    cout << now << ' ';

    for (int next : graph[now]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int now = q.front();
        q.pop();

        cout << now << ' ';

        for (int next : graph[now]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(V);
    cout << '\n';

    fill(visited, visited + 1001, false);

    bfs(V);
    cout << '\n';

    return 0;
}