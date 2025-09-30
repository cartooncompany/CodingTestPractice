#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int root = sqrt(n);
    
    if(root * root == n){
        return 1;
    } else {
        return 2;
    }
}