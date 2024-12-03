#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int num;
    cin >> num;
    int arr[num];
    
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+num, less<int>());
    
    for(int i = 0; i < num; i++){
        cout << arr[i] << "\n";
    }
    return 0;
}