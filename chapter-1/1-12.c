#include <stdio.h>
/*
Exercise 1-12. Write a program that prints its input one word per line.
*/

/*
After compiling run ./a.out < input.txt
on the terminal to use the text file as input.
 */

#define NO 0
#define YES 1

int main() {
  int c;
  int needLine = NO;
  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      putchar(c);
      needLine = YES;
    } else if (needLine == YES) {
      needLine = NO;
      putchar('\n');
    }
  }
  putchar('\n');

  return 0;
}