// Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging


/*
I flipped it but there are some seg fault issues 

*/

#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXROWS 20
#define MAXCOLS 100

int main(){

	int c, i, j, rows, columns, state;
	rows = MAXROWS;
	columns = MAXCOLS;

	int histogram[rows][columns];
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			histogram[i][j] = 0;
		}
	}

	i = j = 0;

	while((c = getchar()) != EOF){
		if(c != ' ' && c != '\t' && c != '\n'){
			histogram[i][j] = 1;
			// j++;
			i++;
		}
		else if(c == ' '){
			j++;
			i = 0;
		}
		else{
			i++;
			j = 0;
		}

	}

	// program prints a star for each level in the histogram, which represents how many
	// letters are in that word of the user input, blank spaces are used to fill up the 
	// area that would have been occupied with zeroes
	for(i = MAXROWS - 1; i > -1; i--){
		for(j = 0; j < columns; j++){
			if(j == columns -1){
				if(histogram[i][j] == 0){
					printf("  \n");
				}
				else{
					printf("*\n");
				}
			}
			else{
				if(histogram[i][j] == 0){
					printf("  ");
				}
				else{
					printf("* ");
				}
			}
		}
	}

	


	return 0;
}








