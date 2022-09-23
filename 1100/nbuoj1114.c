#include <stdio.h>

int main() {
	double n, sum = 0;
	scanf("%lf", &n);
	
	while(n != 0) {
		sum += n;
		scanf("%lf", &n);
	}
	printf("%.2lf\n", sum);
}

