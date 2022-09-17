#include <stdio.h>

int main() {
	char ch = getchar();
	
	if((ch > 64 && ch < 91) || (ch > 96 && ch < 123)) 
		puts("YES");
	else 
		puts("NO");
}

