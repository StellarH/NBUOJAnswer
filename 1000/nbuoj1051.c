#include <stdio.h>

int main() {
	int cnt = 0;
	char ch;
	
	while((ch = getchar()) != '\n') 
		if((ch > 64 && ch < 91) || (ch > 96 && ch < 123))
			cnt++;
	
	printf("%d\n", cnt);
}

