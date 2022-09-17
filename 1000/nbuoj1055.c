#include <stdio.h>
#include <string.h>

int main() {
	int cnt = 0;
	char ch[1001];
	gets(ch);
	
	while(strlen(ch) != 1 || *ch != '@') {
		cnt++;
		gets(ch);
	}
	printf("%d\n", cnt);
}

