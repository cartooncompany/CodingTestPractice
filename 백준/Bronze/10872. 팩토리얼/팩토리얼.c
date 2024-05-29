#include <stdio.h>

int main(void){
	int N, i;
	int a = 1;
	scanf("%d", &N);
	for(i = 1; i <= N; i++){
		a *= i;
	}
	printf("%d", a);
	return 0;
}