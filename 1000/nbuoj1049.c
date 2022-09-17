#include <stdio.h>

int main() {
	char ch = getchar();
	
	if(ch > 47 && ch < 58) 
		puts("digit");
	else if(ch > 64 && ch < 91) 
		puts("upper");
	else if(ch > 96 && ch < 123) 
		puts("lower");
	else 
		puts("other");
}

