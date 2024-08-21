#include <stdio.h>


/* Program that counts blanks, tabs, and newlines. */

int main() {
	int blanks, tabs, newlines;

	blanks = 0;
	tabs = 0 ;
	newlines = 0;

	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			blanks++;
		else if (c == '\t')
			tabs++;
		else if (c == '\n')
			newlines++;
	}
	printf("\nB:\t%d\tT:\t%d\tN:\t%d\n", blanks, tabs, newlines);
}
