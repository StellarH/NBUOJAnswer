#include <stdio.h>

int daysOfMonth(int y, int m);

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	
	a = a*a + b*b;
	if(a >= 100) 
		a /= 100;
	
	printf("%d\n", a);
}

