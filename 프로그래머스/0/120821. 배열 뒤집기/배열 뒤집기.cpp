#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int left = 0;
    int right = num_list.size() - 1;
    
    while(left < right){
        swap(num_list[left], num_list[right]);
        left++;
        right--;
    }
    
    return num_list;
}