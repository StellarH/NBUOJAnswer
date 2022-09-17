#include <stdio.h>

int main() {
	char ch = getchar();
	
	if(ch > 64 && ch < 91) 
		putchar(ch + 32);
	else if(ch > 96 && ch < 123)
		putchar(ch - 32);
	else 
		putchar(ch);
	
	putchar('\n');
}

