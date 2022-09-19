#include <stdio.h>

int main() {
	int h, f, r, c;
	scanf("%d%d", &h, &f);
	
	if(!(f%2)) {
		r = (f - 2 * h) / 2;
		c = h - r;
	}
	if(f%2 || (r^c) < 0 || (r&c) < 0) 
		puts("NO answer");
	else 
		printf("%d %d\n", c, r);
}

