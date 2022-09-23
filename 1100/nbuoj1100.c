#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	
	printf("%.2lf\n", (1 - pow(-0.5, n))/1.5);
}

