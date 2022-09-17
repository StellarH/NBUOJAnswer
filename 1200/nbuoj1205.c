#include <stdio.h>

int main() {
	double x, y, h;
	scanf("%lf%lf%lf", &x, &y, &h);
	printf("%.2lf\n", (x + y)/2*h);
}

