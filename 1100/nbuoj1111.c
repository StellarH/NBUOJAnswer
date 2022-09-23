#include <stdio.h>

int main() {
	int n, num, sum = 0, f = 0;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &num);
		sum += num;
		if(num < 60) 
			f++;
	}
	printf("%.1lf\n%d\n", (double)sum/n, f);
}

