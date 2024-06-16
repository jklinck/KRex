// Write a program to copy its input to its output, replacing each tab by \t, each
// backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
// unambiguous way.

#include <stdio.h>

int main(){

	int c;
	while(1){
		if((c = getchar()) == '\n'){
			break;
		}
		if(c == '\t'){
			printf("\\t");
		}
		else if(c == '\b'){
			printf("\\b");
		}
		else if(c == '\\'){
			printf("\\");
			printf("\\");
		}
		else{
			putchar(c);
		}
	}
	printf("\n");

	return 0;
}

