#include <stdio.h>

int main() {
	double o, h, l, c;
	scanf("%lf%lf%lf%lf", &o, &h, &l, &c);
	
	if(c < o) 
		printf("solid blue and white candle");
	else if(c > o) 
		printf("hollow red candle");
	else 
		printf("cross red candle");
	
	if(h > o && h > c) 
		printf(",upper shadow");
	
	if(l < o && l < c) 
		printf(",lower shadow");
	
	putchar('\n');
}

