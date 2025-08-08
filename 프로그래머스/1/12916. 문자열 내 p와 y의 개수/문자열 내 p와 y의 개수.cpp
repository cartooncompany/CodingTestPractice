#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int pCount = 0;
    int yCount = 0;
    
    for(char c : s) {
        char lower = tolower(c);
        if(lower == 'p') pCount++;
        else if(lower == 'y') yCount++;
    }
    
    if(pCount != yCount) answer = false;
    return answer;
}