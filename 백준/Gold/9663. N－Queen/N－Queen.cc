#include <bits/stdc++.h>
using namespace std;

int n;
int ans = 0;

bool col[15];
bool diag1[30];
bool diag2[30];

void dfs(int row) {
    if (row == n) {
        ans++;
        return;
    }

    for (int c = 0; c < n; c++) {
        if (col[c]) continue;
        if (diag1[row + c]) continue;
        if (diag2[row - c + n - 1]) continue;

        col[c] = true;
        diag1[row + c] = true;
        diag2[row - c + n - 1] = true;

        dfs(row + 1);

        col[c] = false;
        diag1[row + c] = false;
        diag2[row - c + n - 1] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    dfs(0);
    cout << ans << '\n';
    
    return 0;
}