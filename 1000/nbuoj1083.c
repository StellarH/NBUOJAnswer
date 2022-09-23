#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	
	switch(a) {
		case 1: puts("One");break;
		case 2: puts("Two");break;
		case 3: puts("Three");break;
		case 4: puts("Four");break;
		case 5: puts("Five");break;
		case 6: puts("Six");break;
		case 7: puts("Seven");break;
		case 8: puts("Eight");break;
		case 9: puts("Nine");break;
		case 10: puts("Ten");break;
		default: puts("Error");
	}
}

