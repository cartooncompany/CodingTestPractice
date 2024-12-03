#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int num;
    cin >> num;

    vector<int> vec;
    
    for(int i = 0; i < num; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }
    
    sort(vec.begin(), vec.end(), greater<int>());
    
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << "\n";
    }
    return 0;
}