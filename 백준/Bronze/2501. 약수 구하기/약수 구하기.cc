#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, k, count=0;
    cin >> n >> k;
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
            if(count == k){
                cout << i;
                return 0;
            }
        }
    }
    
    cout << 0;
    return 0;
}