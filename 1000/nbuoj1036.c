#include <stdio.h>

int main() {
	double a;
	scanf("%lf", &a);
	
	if(a == 0)
		printf("%d\n", 0);
	else if(a > 0)
		printf("%d\n", 1);
	else
		printf("%d\n", -1);
}
