#include <stdio.h>

int main() {
	int x, y, ans = 1;
	scanf("%d%d", &x, &y);
	
	if(x < 0)
		ans++;
	if(y < 0) {
		ans++;
		if(x > 0)
			ans += 2;
	}
	printf("%d\n", ans);
}

