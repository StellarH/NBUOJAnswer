#include <stdio.h>

double factorial(int n);

int main() {
	int n, sgn = 16;
	scanf("%d", &n);
	
	while(sgn--) 
		if(123 + (sgn&8? 45: -45) + (sgn&4? 67: -67) + (sgn&2? 8: -8) + (sgn&1? 9: -9) == n) 
			break;
	
	if(sgn == -1) 
		puts("impossible");
	else 
		printf("123%c45%c67%c8%c9=%d\n", sgn&8? '+': '-', sgn&4? '+': '-', sgn&2? '+': '-', sgn&1? '+': '-', n);
}

