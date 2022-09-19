#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	
	if(a%5 || a%7) 
		puts("no");
	else 
		puts("yes");
}

