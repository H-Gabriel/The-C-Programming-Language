#include <stdio.h>

/*
Exercise 1-9. Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank.
*/

/*
After compiling run ./a.out < 1-9.txt
on the terminal to use the text file as input.
 */

#define YES 1

int main()
{
    int c;
    int lastCharBlank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && lastCharBlank == YES)
            continue;
        lastCharBlank = c == ' ';
        putchar(c);
    }

    putchar('\n');

    return 0;
}