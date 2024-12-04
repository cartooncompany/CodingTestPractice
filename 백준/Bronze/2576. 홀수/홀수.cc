#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int count = 0;
    
    int min = 100;
    for(int i=0; i < 7; i++){
        int a;
        cin >> a;
        if(a%2==1){
            count += a;
            if(a<min) min = a;
        }
    }
    if(count==0) {
        cout << "-1";
    } else {
        cout << count << '\n' << min;
    }
    
    return 0;
}