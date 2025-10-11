#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    double discount = 0.0;
    
    if (price >= 500000) discount = 0.20;
    else if (price >= 300000) discount = 0.10;
    else if (price >= 100000) discount = 0.05;

    int result = price * (1 - discount);
    return result;
}