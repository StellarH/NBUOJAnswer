#include <stdio.h>

int main() {
	char ch[3];
	gets(ch);
	
	ch[0] += 3;
	ch[1] += 3;
	puts(ch);
}

