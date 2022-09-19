#include <stdio.h>

int main() {
	int v, t, m;
	double c;
	scanf("%d%d%d", &v, &t, &m);
	
	m--;
	if(t == 90) 
		c = v*5.14*(m? 0.98: 0.95);
	else if(t == 93) 
		c = v*5.54*(m? 0.98: 0.95);
	else if(t == 97) 
		c = v*5.90*(m? 0.98: 0.95);
	else 
		c = v*5.13*(m? 0.98: 0.95);
	
	printf("%.2lf\n", c);
}

