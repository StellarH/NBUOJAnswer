#include <stdio.h>

int main() {
	double s, tax;
	scanf("%lf", &s);
	
	s -= 3500;
	if(s > 80000)
		tax = 0.45*s - 13505;
	else if(s > 55000) 
		tax = 0.35*s - 5505;
	else if(s > 35000) 
		tax = 0.3*s - 2755;
	else if(s > 9000) 
		tax = 0.25*s - 1005;
	else if(s > 4500) 
		tax = 0.2*s - 555;
	else if(s > 1500) 
		tax = 0.1*s - 105;
	else if(s > 0) 
		tax = 0.03*s;
	else
		tax = 0;
	
	printf("tax=%.2lf\n", tax);
}

