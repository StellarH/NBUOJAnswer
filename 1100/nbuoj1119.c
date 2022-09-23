#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int row = 1; row <= n; row++) 
		for(int col = 1; col <= row; col++) {
		if(row == col) 
			printf("%d\n", row*col);
		else 
			printf("%-4d", row*col);
	}
}

