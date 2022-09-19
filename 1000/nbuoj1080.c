#include <stdio.h>

int putchars(char ch, int l);

int main() {
	int a;
	scanf("%d", &a);
	
	putchars('*', a);
	putchar('\n');
	
	for(int i = a - 2; i; i--) {
		putchar('*');
		putchars(' ', a - 2);
		putchar('*');
		putchar('\n');
	}
	
	putchars('*', a);
	putchar('\n');
}

int putchars(char ch, int l) {
	while(l--) 
		putchar(ch);
}

