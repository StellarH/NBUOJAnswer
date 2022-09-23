#include<stdio.h>
#define N 10

int sum(int* p, int n) {
	int r;
	while(n--) 
		r += *p++;
	
	return r;
}

int main()
{
	int a[N], i, result;
	for(i = 0; i < N; i++) 
		scanf("%d", &a[i]);
	
	
	result = sum(a, N);
	printf("%d\n", result);
}
