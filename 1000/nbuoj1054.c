#include <stdio.h>

int main() {
	char ch1, ch2;
	
	while((ch1 = getchar()) != '\n' && ch1 != ch2) 
		ch2 = ch1;
	
	if(ch1 == ch2) {
		putchar(ch1);
		putchar('\n');
	}else 
		puts("No");
}

