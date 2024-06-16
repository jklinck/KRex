// Write a program to copy its input to its output, replacing each string of one or
// more blanks by a single blank.

#include <stdio.h>

int main(){

	int spacesCount = 0;

	int c;
	while(1){
		if((c = getchar()) == '\n'){
			break;
		}
		if(c != ' '){
			putchar(c);
			spacesCount = 0;
		}
		if(c == ' ' && spacesCount < 1){
			putchar(c);
			spacesCount++;
		}
	}
	printf("\n");

	return 0;
}