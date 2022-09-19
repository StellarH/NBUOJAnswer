#include <stdio.h>

int main() {
	int n;
	double c;
	scanf("%d", &n);
	
	c = n*(n < 30? 50: 48);
	printf("%.2lf\n", c);
}

