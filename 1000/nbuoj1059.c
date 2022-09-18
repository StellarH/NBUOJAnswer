#include <stdio.h>

int main() {
	int s;
	scanf("%d", &s);
	
	if(s < 60) 
		putchar('C');
	else if(s < 80) 
		putchar('B');
	else 
		putchar('A');
	
	putchar('\n');
}

