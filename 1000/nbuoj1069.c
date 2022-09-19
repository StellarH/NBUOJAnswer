#include <stdio.h>

int main() {
	double v;
	scanf("%lf", &v);
	
	if(v < 11.19) 
		putchar('1');
	else if(v < 16.67) 
		putchar('2');
	else 
		putchar('3');
	
	putchar('\n');
}

