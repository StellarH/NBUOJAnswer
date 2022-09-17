#include <stdio.h>

int main() {
	double x;
	scanf("%lf", &x);
	
	printf("%.1lf\n", 3*x*x*x*x - 2*x*x*x - x*x + 10);
}

