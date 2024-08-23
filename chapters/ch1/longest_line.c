#include <stdio.h>
#include <stdbool.h>


#define MAXLINE 1000 


int gtline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	int temp_len = 0;
	bool maxed = false; 

	max = 0;

	while ((len = gtline(line, MAXLINE)) > 0) {
		if (line[len-1] != '\n') {
			temp_len += len;
			if (maxed == false) {
				copy(longest, line);
				maxed = true;
			}
		} else {
			temp_len += len;
			if (temp_len > max) {
				max = temp_len;
				if (maxed == false)
					copy(longest, line);
			}
			temp_len = 0;
		}
	}

	if (max > 0) {
		printf("Longest line: %s\n", longest);
		printf("Length: %d\n", max);
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
