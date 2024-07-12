#include <stdio.h>

/*
Exercise 1-18. Write a program to remove trailing blanks and tabs from each line
of input, and to delete entirely blank lines.
*/

/*
After compiling run ./a.out < 1-18.txt
on the terminal to use the text file as input.
 */

#define MAX_LEN 100

int getLine(char line[]);
void removeBlanks(char line[], int length);

int main() {
  char line[MAX_LEN];
  int length = 0;
  while ((length = getLine(line)) > 0) {
    removeBlanks(line, length);
  }

  return 0;
}

int getLine(char line[]) {
  int i = 0;
  char c;
  for (; i < MAX_LEN - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  line[i] = '\0';

  return i;
}

void removeBlanks(char line[], int length) {
  for (; line[length - 1] == '\t' || line[length - 1] == ' '; --length)
    ;

  line[length] = '\0';
  printf("%s\n", line);
}