#include <stdio.h>

int main() {
	char a = getchar(), b = getchar();
	
	if(a < b) 
		printf("%c %c\n", a, b);
	else 
		printf("%c %c\n", b, a);
}

