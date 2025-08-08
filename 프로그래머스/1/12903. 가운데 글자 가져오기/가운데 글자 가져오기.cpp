#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    
    int length = s.length();
    int middle = length / 2;
    
    if(length % 2 == 0){
        return s.substr(middle - 1, 2);
    } else {
        return s.substr(middle, 1);
    }
    
}