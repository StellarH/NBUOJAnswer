#include <stdio.h>

int main() {
	int d[3];
	scanf("%d%d%d", d, d + 1, d + 2);
	
	for(int i = 0; i < 3; i++) 
		for(int j = i; j < 3; j++) 
			if(d[j - 1] < d[j]) {
				d[j] = d[j - 1]^d[j];
				d[j - 1] = d[j - 1]^d[j];
				d[j] = d[j - 1]^d[j];
			}
	printf("%d %d %d\n", d[0], d[1], d[2]);
}

