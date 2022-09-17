#include <stdio.h>

int main() {
	double r, e;
	scanf("%lf%lf", &r, &e);
	
	printf("%.1lf\n", (90 - 0.1*r -0.3*e)/0.6);
}

