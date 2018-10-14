#include <stdio.h>

#define TABSTOP 8		/* number of spaces between tabstops */
#define MAXLENGTH 1000

/* replaces tabs in input with spaces */
int main(){
	int c, i, j;
	int rem;		/* number of remaining spaces until next tab stop */
	char word[MAXLENGTH];

	for (i=0; i<=MAXLENGTH && c!=EOF; ++i){
		c = getchar();
		rem = TABSTOP - (i% TABSTOP);
		if (c == '\t'){
			for (j=rem; j>0; --j){
				word[i] = ' ';
				++i;
			}
		}
		else if(c == '\n')
			word[i] = c;
		else
			word[i] = c;
	}

	printf("%s", word);
	return 0;
}
