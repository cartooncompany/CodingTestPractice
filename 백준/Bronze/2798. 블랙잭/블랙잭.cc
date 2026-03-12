#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        v.push_back(a);
    }
    
    int answer = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                int sum = v[i] + v[j] + v[k];
                if(sum <= m) {
                    answer = max(answer, sum);
                }
            }
        }
    }
    
    cout << answer;
    return 0;
}