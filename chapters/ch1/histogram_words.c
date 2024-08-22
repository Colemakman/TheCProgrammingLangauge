#include <stdio.h>

#define MAXWORD 20 // Max length of word to check

int main() {

	int c;
	int length = 0;
	int word_lengths[MAXWORD] = {0};


	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\n' && c != '\t') 
			length += 1;
		else {
			if (length != 0)
				word_lengths[length-1]++;
			length = 0;
		}
	}

	printf("Word lengths:\n");
	for (int i = 1; i <= MAXWORD; i++) {
		printf("%3d: ", i);
		for (int j = 0; j < word_lengths[i-1]; j++)
			putchar('-');
		putchar('\n');
	}

	return 0;
}
