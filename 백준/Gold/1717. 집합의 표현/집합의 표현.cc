#include <bits/stdc++.h>
using namespace std;

int parent[1000001];

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) parent[b] = a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i <= n; i++) {
        parent[i] = i;
    }

    while (m--) {
        int op, a, b;
        cin >> op >> a >> b;

        if (op == 0) {
            unite(a, b);
        } else {
            if (find(a) == find(b)) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}