#include <stdio.h>

int factorial(int n);

int main() {
	int n;
	scanf("%d", &n);
	
	printf("%d\n", factorial(n));
}

int factorial(int n) {
	return n == 1? 
	1: n*factorial(n - 1);
}

