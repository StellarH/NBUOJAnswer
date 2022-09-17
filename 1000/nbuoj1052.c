#include <stdio.h>

int main() {
	int cnt = 0;
	char ch;
	
	while((ch = getchar()) != '\n') 
		if(ch > 47 && ch < 58)
			cnt++;
	
	printf("%d\n", cnt);
}

