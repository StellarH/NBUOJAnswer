#include <stdio.h>
#include <math.h>

int main() {
	int x;
	double y;
	scanf("%d", &x);
	
	if(x < 0) 
		y = sqrt(5 - x);
	else 
		y = x*x - 2;
	
	printf("%.2lf\n", y);
}

