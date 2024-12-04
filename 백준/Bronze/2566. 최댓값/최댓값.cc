#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<vector<int>> vec(9, vector<int>(9, 0));
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> vec[i][j];
        }
    }
    
    int large = vec[0][0];
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            large = max(large, vec[i][j]);
        }
    }
    
    
    int a, b;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(large == vec[i][j]){
                a = i;
                b = j;
            }
        }
    }
    
    cout << large << "\n" << a+1 << " " << b+1;
    return 0;
}