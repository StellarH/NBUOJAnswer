#include <stdio.h>

int main() {
	int n;
	double a = 1, b = 2, ans = 0;
	scanf("%d", &n);
	
	while(n--) {
		ans += b/a;
		b = b + a;
		a = b - a;
	}
	printf("%.6lf\n", ans);
}
