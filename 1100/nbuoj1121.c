#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) 
		printf("%d ", (int)pow(2, i));
	
	printf("%d\n", (int)pow(2, n));
}

