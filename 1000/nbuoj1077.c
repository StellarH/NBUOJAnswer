#include <stdio.h>

int main() {
	char 
		a = (getchar() - 48 + 9)%10 + 48, 
		b = (getchar() - 48 + 9)%10 + 48, 
		c = (getchar() - 48 + 9)%10 + 48, 
		d = (getchar() - 48 + 9)%10 + 48;
	
	putchar(c);
	putchar(d);
	putchar(a);
	putchar(b);
	putchar('\n');
}

