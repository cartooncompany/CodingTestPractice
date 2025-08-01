#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    int i = 0;
    while(true){
        i += x;
        answer.push_back(i);
        if(answer.size() == n) break;
    }
    return answer;
}