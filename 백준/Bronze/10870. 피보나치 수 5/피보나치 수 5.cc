#include <bits/stdc++.h>

using namespace std;

void fibonnaci(int n){
    vector<int> vec(20, 0);
    
    vec[0] = 0;
    vec[1] = 1;
    for(int i = 2; i <= n; i++){
        vec[i] = vec[i-1] + vec[i-2];
    }
    cout << vec[n];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    fibonnaci(n);
    
    return 0;
}