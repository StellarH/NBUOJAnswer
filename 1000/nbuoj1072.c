#include <stdio.h>

int main() {
	int y;
	scanf("%d", &y);
	
	if((y%4 || !(y%100)) && y%400) 
		puts("no");
	else 
		puts("yes");
}

