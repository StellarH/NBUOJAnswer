#include <stdio.h>

int main() {
	double a, b;
	char s;
	scanf("%lf%c%lf", &a, &s, &b);
	
	if(s == '+') 
		printf("%.2lf\n", a + b);
	else if(s == '-') 
		printf("%.2lf\n", a - b);
	else if(s == '*') 
		printf("%.2lf\n", a*b);
	else
		printf("%.2lf\n", a/b);
}

