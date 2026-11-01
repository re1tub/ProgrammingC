#include <stdio.h>
#define TABINC 4

int main(void) {
       	int nb,pos,count;

	nb = 0;
	pos = 1;

	while ((count = getchar()) != EOF) {
		if (count == '\t') {
			nb = TABINC - ((pos - 1) % TABINC);
			while( nb > 0) {
				putchar (' ');
				++pos;
				--nb;
			}
		}
		else if(count == '\n') {
			putchar(count);
			pos = 1;
		}
		else {
			putchar(count);
			++pos;
		}

	}
	return 0;
}
