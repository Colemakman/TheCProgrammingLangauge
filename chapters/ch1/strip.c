#include <stdio.h>


int main() {
	
	int c;
	int prev_c = '\0'; // NULL character
					  
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (prev_c != ' ')
				putchar(c);
		} else
			putchar(c);

		prev_c = c;
	}	

	return 0;
}
