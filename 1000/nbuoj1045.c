#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	double ans;
	scanf("%d%d", &a, &b);
	
	ans = sqrt(a*a + b*b) - 10;
	if(ans < 0) 
		puts("in");
	else if(ans == 0) 
		puts("on");
	else
		puts("out");
}

