#include <stdio.h>

int main() {
	int a, o = 0, e = 0;
	scanf("%d", &a);
	
	do {
		if(a%2) 
			o += a;
		else
			e += a;
	}while(--a);
	printf("%d\n%d\n", o, e);
}


