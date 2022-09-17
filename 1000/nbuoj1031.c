#include <stdio.h>

int main() {
	int a,ans = 0;
	scanf("%d", &a);
	
	do {
		ans = ans*10 + a%10;
	}while(a /= 10);
	printf("%d\n", ans);
}
