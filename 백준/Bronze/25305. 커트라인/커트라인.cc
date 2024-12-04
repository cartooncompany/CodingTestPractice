#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, k, count=0;
    cin >> n >> k;
    
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }
    
    sort(vec.begin(), vec.end(), greater<int>());
    
    cout << vec[k-1];
    
    return 0;
}