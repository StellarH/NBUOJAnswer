#include <stdio.h>
#include <math.h>

int main() {
	int y, m, d;
	scanf("%d%d%d", &y, &m, &d);
	
	printf("PRC form:%d/%d/%d\n", y, m, d);
	printf("UK form:%d/%d/%d\n", d, m, y);
	printf("USA form:%d/%d/%d\n", m, d, y);
}

