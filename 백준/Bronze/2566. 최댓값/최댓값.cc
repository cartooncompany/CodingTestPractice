#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int max = -1;
    int x, y;
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            int a;
            cin >> a;
            
            if(a >= max){
                max = a;
                x = i;
                y = j;
            }
        }
    }
    
    cout << max << "\n";
    cout << x << " " << y;
    return 0;
}