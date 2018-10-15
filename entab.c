#include <stdio.h>

#define MAXLENGTH 1000		/* max input */
#define TABSTOP 4		/* number of spaces in a tab */

int countSpaces(char str[], int curr_pos);

int main() {
	int c, i, j, k;
	int count;		/* trackS number of spaces from input */
	int tabs;		/* tracks number of tabs to output */
	int spaces;		/* tracks number of spaces to output */
	char input[MAXLENGTH];
	char output[MAXLENGTH];

	for (i=0; (c=getchar()) != EOF; ++i)
		input[i] = c;

	for (i=0, k=0; (c=input[i]) != '\0';) {
		if (c == ' '){
			count = countSpaces(input, i);
			tabs = count / TABSTOP;
			spaces = count % TABSTOP;

			for (j=0; j<spaces; ++j) {
				output[k] = ' ';
				++k;
				++i;
			}

			for (j=0; j<tabs; ++j) {
				output[k] = '\t';
				++k;
				i = i + TABSTOP;
			}

		}
		else{ 
			output[k] = c;
			++i;
			++k;
		}
	}

	printf("%s", output);
	return 0;
}

int countSpaces(char str[], int curr_pos) {
	int c;
	int count = 0;		/* tracks space count: will be output */
	
	while (str[curr_pos] == ' '){
		++count;
		++curr_pos;
	}

	return count;
}
