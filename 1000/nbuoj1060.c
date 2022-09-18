#include <stdio.h>

int main() {
	int s;
	scanf("%d", &s);
	
	if(s < 60) 
		putchar('E');
	else if(s < 70) 
		putchar('D');
	else if(s < 80) 
		putchar('C');
	else if(s < 90) 
		putchar('B');
	else 
		putchar('A');
	
	putchar('\n');
}

