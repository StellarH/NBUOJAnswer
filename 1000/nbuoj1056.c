#include <stdio.h>

int main() {
	int cnt = 0;
	char ch[1001], cch;
	char* pch = ch;
	gets(ch);
	cch = getchar();
	
	do 
		if(*pch == cch)
			cnt++;
	while(*++pch != 0);
	printf("%d\n", cnt);
}

