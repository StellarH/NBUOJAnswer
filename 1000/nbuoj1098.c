#include <stdio.h>

int main() {
	int n;
	double ans = 0;
	scanf("%d", &n);
	
	n++;
	while(--n) 
		ans += 1.0/n;
	
	printf("%.6lf\n", ans);
}

