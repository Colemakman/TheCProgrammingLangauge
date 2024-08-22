#include <stdio.h>


#define ASCII_SIZE 128


int main() {

	int c;
	int char_freq[ASCII_SIZE] = {0};

	while ((c = getchar()) != EOF) {
		if (c >= 0 && c <= ASCII_SIZE)
			char_freq[c]++;
	}

	printf("Character counts:\n");
	for (int i = 0; i < ASCII_SIZE; i++) {
		printf("%3c ", i);
		for (int j = 0; j < char_freq[i]; j++)
			putchar('-');
		putchar('\n');
	}

	return 0;
}
