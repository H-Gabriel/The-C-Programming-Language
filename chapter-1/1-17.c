#include <stdio.h>

/*
Exercise 1-17. Write a program to print all input lines that are longer than 80
characters.
*/

/*
After compiling run ./a.out < 1-17.txt
on the terminal to use the text file as input.
 */

// The question asks for longer than 80, but I define longer than 5 for the sake
// of clarity on the terminal. The logic is the same.
#define MAX_LEN 101
#define PRINTABLE 5

int getLine(char line[]);

int main() {
  int length = 0;
  char line[MAX_LEN];
  while ((length = getLine(line)) != EOF) {
    if (length > PRINTABLE) {
      printf("%s\n", line);
    }
  }

  return 0;
}

int getLine(char line[]) {
  int i;
  char c;
  for (i = 0; i < MAX_LEN - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  // When EOF is encountered this function returns the current line length. So
  // it is necessary to check if a line even exists, if not return EOF and use
  // it to stop the loop on the main function
  if (i == 0 && c == EOF)
    return EOF;

  line[i] = '\0';

  return i;
}