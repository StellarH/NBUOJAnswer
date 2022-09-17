#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	
	printf("%d ", a/10);
	a %= 10;
	printf("%d ", a/5);
	a %= 5;
	printf("%d \n", a);
}

