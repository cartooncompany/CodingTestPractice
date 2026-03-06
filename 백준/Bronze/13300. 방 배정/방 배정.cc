#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;

    int cnt[2][7] = {0}; // 0: 여학생, 1: 남학생

    for (int i = 0; i < N; i++) {
        int S, Y;
        cin >> S >> Y;
        cnt[S][Y]++;
    }

    int rooms = 0;

    for (int s = 0; s < 2; s++) {
        for (int y = 1; y <= 6; y++) {
            rooms += (cnt[s][y] + K - 1) / K;
        }
    }

    cout << rooms << endl;
    
    return 0;
}