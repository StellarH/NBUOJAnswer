#include <stdio.h>

int main() {
	int y0, m0, d0, y1, m1, d1, ag;
	scanf("%d%d%d%d%d%d", &y0, &m0, &d0, &y1, &m1, &d1);
	
	ag = y1 - y0;
	if(m0 > m1 || (m0 == m1 && d0 > d1)) 
		ag--;
	
	printf("%d\n", ag);
}

