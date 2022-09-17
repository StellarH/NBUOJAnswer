#include <stdio.h>

int main() {
	int b;
	unsigned __int64 ans = 1;
	scanf("%d", &b);
	
	for(int i = 0; i < b; i++) 
		ans |= 1 << i;
	
	printf("%I64u", ans);
}

