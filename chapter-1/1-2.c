#include <stdio.h>

/*
List: \n \t \b \" \\
Exercise 1-2. Experiment to find out what happens when prints's
argument string contains \c, where c is some character not listed above.
*/

/*
The compiler outputs -> warning: unknown escape sequence: '\l'
The executable simply prints l
*/

int main()
{
    printf("\l\n");

    return 0;
}
