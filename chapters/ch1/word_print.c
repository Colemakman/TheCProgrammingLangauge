#include <stdio.h>


#define IN 1
#define OUT 0

/* Print each word from input, newline per word */

int main() { 
	
	int c, state;
	int prev_c = '\0';
	state = OUT;	

	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			state = OUT;
			if (prev_c != '\n' && prev_c != '\t' && prev_c != ' ')
				putchar('\n'); // prev_c == char -> print newline
		}

		else
			state = IN;

		if (state == IN)
			putchar(c);

		prev_c = c;
	}

	return 0;
}
