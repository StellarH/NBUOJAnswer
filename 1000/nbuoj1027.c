#include <stdio.h>
#include <math.h>

int main() {
	int y;
	double m, r;
	scanf("%lf%d%lf", &m, &y, &r);
	
	printf("%.2lf\n", m*(pow(1 + r, y) - 1));
}

