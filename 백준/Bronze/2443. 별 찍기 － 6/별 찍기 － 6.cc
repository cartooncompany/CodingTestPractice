#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int k = 0; k < i; k++) cout<<" ";
        for(int j = i * 2; j<n*2-1; j++) cout<<"*";
        cout<<"\n";
    }
}