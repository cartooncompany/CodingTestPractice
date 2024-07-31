#include <iostream>
using namespace std;

int main(){
    
    string n, m;
    cin>>n>>m;
    
    if(n.length() == m.length() || n.length() > m.length()){
        cout<<"go";
    } else {
        cout<<"no";
    }
    
    return 0;
}