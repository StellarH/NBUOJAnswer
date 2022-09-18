#include <stdio.h>

int main() {
	int s;
	scanf("%d", &s);
	
	if(s < 60) 
		puts("failure");
	else 
		puts("pass");
}

