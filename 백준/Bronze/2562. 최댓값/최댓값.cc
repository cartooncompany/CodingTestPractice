#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int max = 0;
    int x;
    for(int i = 1; i <= 9; i++){
        int a;
        cin >> a;
        
        if(a >= max){
            max = a;
            x = i;
        }
    }
    cout << max << "\n";
    cout << x;
    return 0;
}