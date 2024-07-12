#include <stdio.h>

/*
Exercise 1-14. Write a program to print a histogram of the frequencies of
different characters in its input
*/

/*
After compiling run ./a.out < 1-14.txt
on the terminal to use the text file as input.
 */

#define ASCII_LENGTH 95 // amount of printable characters

int main() {
  char c;
  int frequency[ASCII_LENGTH];

  for (int i = 0; i < ASCII_LENGTH; i++) {
    // Thank you random youtuber for telling me this is possible
    i[frequency] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= ' ' && c <= '~')
      frequency[c - ' ']++;
  }

  for (int i = 0; i < ASCII_LENGTH; i++) {
    printf("%c ", i + ' ');

    int charAmount = i[frequency];
    while (charAmount > 0) {
      charAmount--;
      putchar('*');
    }
    putchar('\n');
  }

  putchar('\n');

  return 0;
}