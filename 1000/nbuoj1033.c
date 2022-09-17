#include <stdio.h>

int main() {
	int a,ans = 0;
	scanf("%d", &a);
	
	do {
		ans = a;
	}while(a /= 10);
	printf("%d\n", ans);
}
