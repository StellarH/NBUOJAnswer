#include <stdio.h>

int main() {
	int maxn, n = 4, ds = 1;
	scanf("%d", &maxn);
	
	while(n*2 - 2 <= maxn) {
		n *= 2;
		ds++;
	}
	printf("%.2lf\n", 0.4*(n - 2)/ds);
}

