#include <stdio.h>

int main() {
	int n;
	double ans = 0;
	scanf("%d", &n);
	
	n++;
	while(--n) 
		ans += 1.0/(2*n - 1);
	
	printf("%.2lf\n", ans);
}

