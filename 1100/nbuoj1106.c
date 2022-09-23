#include <stdio.h>

int main() {
	int n, fact[11] = {2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600};
	
	while(scanf("%d", &n) == 1) {
		if(n%2) 
			n--;
		
		int i = 11;
		while(i-- && n) 
			if(n >= fact[i]) 
				n -= fact[i];
		
		if(n) 
			puts("NO");
		else 
			puts("YES");
	}
}

