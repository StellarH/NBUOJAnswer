#include <stdio.h>

int main() {
	int h, f, r, c;
	scanf("%d%d", &h, &f);
	
	r = (f - 2 * h) / 2;
	c = h - r;
	printf("%d %d\n", c, r);
}

