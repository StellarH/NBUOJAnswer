#include <stdio.h>

int main() {
	if(getchar() == '+')
		printf("%d\n", getchar() + getchar());
	else
		printf("%d\n", getchar() - getchar());
}

