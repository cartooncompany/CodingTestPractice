#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    double n = arr[0];
    for(int i = 1; i < arr_len; i++){
        n += arr[i];
    }
    return answer = n/arr_len;
}