#include <stdio.h>

int main() {
	int maxn, n = 4, ds = 1;
	scanf("%d", &maxn);
	
	while(n - 2 <= maxn) {
		n *= 2;
		ds++;
	}
	printf("Average=%.2lf\n", 1.2*(n - 2)/ds);
}

