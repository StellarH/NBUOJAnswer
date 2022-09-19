#include <stdio.h>

int main() {
	int n1, n2, t = 5;
	scanf("%d%d", &n1, &n2);
	
	while(n1 <= n2) {
		if(n1%3) {
			printf("%d", n1);
			if(--t) 
				putchar(' ');
			else {
				putchar('\n');
				t = 5;
			}
		}
		n1++;
	}
}

