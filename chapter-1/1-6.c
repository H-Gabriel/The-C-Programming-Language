#include <stdio.h>

/*
Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1
*/

/*
After compiling run ./a.out < 1-6.txt
on the terminal to use the text file as input.
 */

int main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        printf(" %d\n", c != EOF);
        c = getchar();
    }
    printf("%d\n", c != EOF);

    return 0;
}