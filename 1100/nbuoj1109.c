#include <stdio.h>

int main() {
	int n, num, sum;
	
	while(scanf("%d", &n) == 1) {
		sum = 0;
		while(n--) {
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}
}

