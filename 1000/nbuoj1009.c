#include <stdio.h>

int main() {
	double r, h;
	scanf("%lf%lf", &r, &h);
	
	printf("%.2lf\n", 2*3.14*r*(h + r));
}

