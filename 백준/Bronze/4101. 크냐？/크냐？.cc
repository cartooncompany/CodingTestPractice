#include <iostream>
using namespace std;

int main(){
    
    int n, m;
    while(cin>>n>>m){
        if(n > m){
            cout<<"Yes"<<"\n";
        } else if(n==0 && m==0){
            break;
        } else {
            cout<<"No"<<"\n";
        }
    }
    return 0;
}