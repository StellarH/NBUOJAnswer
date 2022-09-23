#include <stdio.h>

int main() {
	int t, n, ans = 0;
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d", &n);
		ans += n;
	}
	printf("%d\n", ans);
}

