#include <stdio.h>

int main() {
	int n = 0, num, sum = 0;
	scanf("%d", &num);
	
	while(num >= 0) {
		n++;
		sum += num;
		scanf("%d", &num);
	}
	printf("%.1lf\n", (double)sum/n);
}

