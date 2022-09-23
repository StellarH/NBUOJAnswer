#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	
	printf("%.6lf %.6lf\n", 300 - 100/pow(2, n - 2), 100/pow(2, n));
}

