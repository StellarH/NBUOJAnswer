#include <stdio.h>

int main() {
	char a, b, c, d;
	scanf("%c%c%c%c", &a, &b, &c, &d);
	
	printf("%c %c %c %c\n", a, b, c, d);
	printf("%d\n", a + b + c + d - 4*48);
}

