// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main()
{
    char x[20];
    int spacesCount = 0;
    int tabsCount = 0;
    int newLinesCount = 0;
    printf("Enter something: ");
    
    int c;
    while(1){
        if((c = getchar()) == ' '){
            spacesCount++;
        }
        else if(c == '\t'){
            tabsCount++;
        }
        if(c == '\n'){
            newLinesCount++;
            break;
        }
    }
    
    printf("spacesCount = %d\n", spacesCount);
    printf("tabsCount = %d\n", tabsCount);
    printf("newLinesCount = %d\n", newLinesCount);

    return 0;
}