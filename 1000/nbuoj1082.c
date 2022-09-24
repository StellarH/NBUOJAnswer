#include <stdio.h>
#include <math.h>

int main() {
	double x, y, ans;
	scanf("%lf%lf", &x, &y);
	
	x = abs(x);
	y = abs(y);
	ans = sqrt(pow(x - 2, 2) + pow(y - 2, 2));
	if(ans <= 0.5) 
		puts("50");
	else 
		puts("0");
}

