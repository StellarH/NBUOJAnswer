#include <stdio.h>

double factorial(int n);

int main() {
	int n;
	double ans = 1;
	scanf("%d", &n);
	
	n++;
	while(--n) 
		ans += 1/factorial(n);
	
	printf("%.6lf\n", ans);
}

double factorial(int n) {
	return n == 1? 
		1: n*factorial(n - 1);
}

