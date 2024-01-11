#include <stdio.h>

/*
Exercise 1-8. Write a program to count blanks, tabs and newlines.
*/

/*
After compiling run ./a.out < input.txt
on the terminal to use the text file as input.
 */

int main()
{
    int c;
    int blanks = 0, tabs = 0, lines = 1;

    while ((c = getchar()) != EOF)
    {
        blanks += c == ' ';
        tabs += c == '\t';
        lines += c == '\n';
    }

    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Lines: %d\n", lines);

    return 0;
}