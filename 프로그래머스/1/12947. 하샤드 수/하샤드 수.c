#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int y = x;
    int sum = 0;
    while(x != 0){
        sum += x % 10;
        x /= 10;
    }
    return (y % sum == 0) ? true : false;
}