#include <stdio.h>
#include <math.h>

int main() {
	int x, y, po;
	scanf("%d%d", &x, &y);
	
	po = pow(x, y);
	printf("%d %d\n", po, po%1000);
}

