#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int max1 = numbers[0];
    int max2 = numbers[1];

    if (max2 > max1) swap(max1, max2);

    for (int i = 2; i < numbers.size(); i++) {
        if (numbers[i] > max1) {
            max2 = max1;
            max1 = numbers[i];
        } else if (numbers[i] > max2) {
            max2 = numbers[i];
        }
    }

    
    return max1 * max2;
}