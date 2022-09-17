#include <stdio.h>

int main() {
	int a, t, o = 0, e = 0;
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d", &a);
		if(a%2) 
			o += a;
		else
			e += a;
	}
	printf("%d\n%d\n", o, e);
}

