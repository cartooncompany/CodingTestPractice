#include<bits/stdc++.h>
using namespace std;

vector<int> graph[101];
bool visited[101];
int cnt = 0;

void dfs(int now) {
    visited[now] = true;

    for (int next : graph[now]) {
        if (!visited[next]) {
            cnt++;          // 새 컴퓨터 감염
            dfs(next);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;   // 컴퓨터 수
    cin >> m;   // 연결된 쌍의 수

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    cout << cnt << '\n';
    return 0;
}