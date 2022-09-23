#include <stdio.h>

int main() {
	int y = 1980;
	double N, n = 45;
	scanf("%lf", &N);
	
	while(n < N) {
		n *= 1.01;
		y++;
	}
	printf("%d\n", y);
}

