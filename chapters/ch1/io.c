#include <stdio.h>


int main() {
	int c;

	printf("The numeric value of EOF is: %d\n", EOF);
	while ((c = getchar()) != EOF) { /* EOF = -1 */
		putchar(c);
	}
	
	return 0;
}
