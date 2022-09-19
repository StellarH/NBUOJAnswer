#include <stdio.h>

int daysOfMonth(int y, int m);

int main() {
	int y, ds, m = 1, dom;
	scanf("%d%d", &y, &ds);
	
	while(m <= 12) {
		dom = daysOfMonth(y, m);
		if(ds > dom) 
			ds -= dom;
		else 
			break;
		m++;
	}
	printf("%d-%d-%d\n", y, m, ds);
}

int daysOfMonth(int y, int m) {
	if(m == 2) {
		if((y%4 || !(y%100)) && y%400) 
			return 28;
		else 
			return 29;
	}else if((m%2 && m < 8) || (!(m%2) && m > 7)) 
		return 31;
	else 
		return 30;
}

