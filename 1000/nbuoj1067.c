#include <stdio.h>

int main() {
	double c;
	scanf("%lf", &c);
	
	if(c >= 5000) 
		c *= 0.8;
	else if(c >= 3000) 
		c *= 0.85;
	else if(c >= 1000) 
		c *= 0.9;
	else if(c >= 500) 
		c *= 0.95;
	
	printf("%.2lf\n", c);
}

