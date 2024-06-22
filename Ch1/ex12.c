//   write a program that prints it's input one word per line

#include <stdio.h>

int main(){

	int c;

	while((c = getchar()) != EOF){
		if(c != ' ' && c != '\t'){
			putchar(c);
		}
		else{
			putchar('\n');
		}
	}

	return 0;
}