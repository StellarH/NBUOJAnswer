#include <stdio.h>

int main() {
	int n = 0, num, sum = 0;
	
	while(scanf("%d", &num) == 1) {
		sum += num;
		n++;
	}
	printf("%d\n", sum);
}

