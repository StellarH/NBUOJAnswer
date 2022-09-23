#include <stdio.h>

int factorial(int n);

int main() {
	int n, ans = 0;
	scanf("%d", &n);
	
	do 
		ans += factorial(n);
	while(--n);
	printf("%d\n", ans);
	
}

int factorial(int n) {
	return n == 1? 
	1: n*factorial(n - 1);
}

