#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, a = 1;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        a *= i;
    }
    cout << a;
    
    return 0;
}