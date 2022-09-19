#include <stdio.h>

int main() {
	int n, a, t, ans = 0;
	scanf("%d%d", &n, &a);
	
	t = a;
	while(n--) {
		ans += a;
		a = 10*a + t;
	}
	printf("%d\n", ans);
}

