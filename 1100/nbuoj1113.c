#include <stdio.h>

int main() {
		int n, num, _p = 0, _0 = 0, _n = 0;
		scanf("%d", &n);
	
	while(n--) {
		scanf("%d", &num);
		if(num) {
			if(num > 0) 
				_p++;
			else 
				_n++;
		}
		else 
			_0++;
	}
	printf("%d\n%d\n%d\n", _p, _n, _0);
}

