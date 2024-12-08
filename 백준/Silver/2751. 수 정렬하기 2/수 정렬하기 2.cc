#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<long long> vec;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }
    
    sort(vec.begin(), vec.end(), less<int>());
    for(int i = 0; i<vec.size(); i++){
        cout << vec[i] << "\n";
    }
    return 0;
}