#include <stdio.h>
#include <stdbool.h>


#define MAXLINE 1000


int gtline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	int last_char;

	max = 0;

	while ((len = gtline(line, MAXLINE)) > 0) {

		if (len > max) {
			max = len;
			copy(longest, line);
		}

		last_char = -1;
		for (int i = len - 1; i > 0; i--) {
			if (line[i] != ' ' && line[i] != '\t') {
				last_char = i;
				break;
			}
		}
		line[last_char + 1] = '\0';
		
		if (last_char >= 0) {
			for (int i = len - 2; i >= 0; i--)
				putchar(line[i]);
			putchar('\n');
		}
	}

	if (max > 0) {
		printf("%s", longest);
	}

	return 0;
}

/* getline: read a line into s, return length */

int gtline(char s[], int lim) {
	
	int c, i;

	for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */

void copy(char to[], char from[]) {

	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		i++;
}
