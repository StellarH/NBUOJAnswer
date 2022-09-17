#include <stdio.h>

int main() {
	char ch[1001];
	char* pch = ch;
	gets(ch);
	
	do {
		if(*pch > 64 && *pch < 91) 
			*pch += 32;
		else if(*pch > 96 && *pch < 123)
			*pch -= 32;
	}while(*++pch != 0);
	puts(ch);
}

