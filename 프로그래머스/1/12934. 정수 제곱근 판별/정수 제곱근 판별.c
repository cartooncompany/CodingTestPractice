#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    double x = sqrt(n);
    answer = (x == (int)x) ? (x+1)*(x+1) : -1;
    return answer;
}