#include <stdio.h>

int main() {
	int lcnt = 0, dcnt = 0, scnt = 0, ocnt = 0;
	char ch;
	
	while((ch = getchar()) != '\n') {
		if(ch > 47 && ch < 58) 
			dcnt++;
		else if((ch > 64 && ch < 91) || (ch > 96 && ch < 123)) 
			lcnt++;
		else if(ch == 32)
			scnt++;
		else 
			ocnt++;
	}
	printf("%d %d %d %d\n", lcnt, dcnt, scnt, ocnt);
}

