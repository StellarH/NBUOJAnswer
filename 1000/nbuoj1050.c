#include <stdio.h>

int main() {
	int len = 0;
	char ch = getchar();
	
	while(ch != '\n') {
		len++;
		ch = getchar();
	}
	printf("%d\n", len);
}

