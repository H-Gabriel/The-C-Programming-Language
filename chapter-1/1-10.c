#include <stdio.h>

/*
Exercise 1-10. Write a program to copy its input to its output,
replacing each tab by \t, each backspace by \b, and each backslash by \\.
This makes tabs and backspaces visible in an unambiguous way.
*/

/*
After compiling run ./a.out < input.txt
on the terminal to use the text file as input.
 */

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    else if (c == ' ')
      printf("\\b");
    else if (c == '\\')
      printf("\\\\");
    else
      putchar(c);
  }

  putchar('\n');

  return 0;
}