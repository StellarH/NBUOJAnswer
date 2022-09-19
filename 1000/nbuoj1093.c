#include <stdio.h>

int main() {
	int n, ans = 0;
	scanf("%d", &n);
	
	do 
		ans += n*(n + 1)/2;
	while(--n);
	printf("%d\n", ans);
}

