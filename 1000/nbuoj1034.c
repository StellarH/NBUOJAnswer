#include <stdio.h>

int main() {
	int a, cnt = 1;
	scanf("%d", &a);
	
	while(a /= 10) 
		cnt++;
	
	printf("%d\n", cnt);
}

