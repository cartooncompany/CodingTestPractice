#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, max = 0;
    double  total = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        total += a;
        if(a > max) {
            max = a;
        }
    }
    total = total * 100.0 / n / max;
    cout << total;
    
    return 0;
}