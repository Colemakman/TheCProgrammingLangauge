#include <stdio.h>


#define TAB_SIZE 8

int main() {
	int c;
	int spaces;
	int index = 0;

	while ((c = getchar()) != EOF) {

		if (c == '\t') {
			
			spaces = TAB_SIZE - (index % TAB_SIZE);

			for (int sp = 0; sp < spaces; sp++) {
				putchar(' ');
				index++;
			}

		} else if (c == '\n') {
			
			putchar(c);
			index = 0;
		} else {
			putchar(c);
			index++;
		}
	}
}
