#include <stdio.h>

int main() {
	int y, m;
	scanf("%d%d", &y, &m);
	
	if(m == 2) {
		if((y%4 || !(y%100)) && y%400) 
			puts("28");
		else 
			puts("29");
	}else if((m%2 && m < 8) || (!(m%2) && m > 7)) 
		puts("31");
	else 
		puts("30");
}

