#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	if(a + b > c && b + c > a && c + a > b) {
		double p = (a + b + c)/2;
		printf("%.2lf\n", sqrt(p*(p - a)*(p - b)*(p - c)));
	}else
		puts("Error");
}

