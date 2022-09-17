#include <stdio.h>

int main() {
	double x1, y1, x2, y2;
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	
	printf("%.1lf %.1lf\n", x1/y1, x1/x2*y2);
}

