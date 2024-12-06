#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string num;
    while(true){
        bool pal = 1;
        cin >> num;
        if(num == "0") break;
        
        for(int i = 0; i <= num.length()/2; i++){
            if(num[i] != num[num.length()-1-i]){
                pal = 0;
                break;
            }
        }
        if(pal != 0) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}