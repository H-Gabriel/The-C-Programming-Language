#include <stdio.h>

/*
Exercise 1-16. Revise the main routine of the longest-line program so it will
correctly print the length of arbitrary long input lines, and as much as
possible of the text.
*/

/*
After compiling run ./a.out < 1-16.txt
on the terminal to use the text file as input.
 */

#define MAX_LEN 17

int getLine(char line[]);
void copy(char to[], char from[]);

int main() {
  int len = 0;
  int max = 0;

  // As of my current understanding the original program was placing \0 after
  // the last position of the line arrays. Here I put +1 so its in bounds, and
  // the MAXLINE definition applies for printable characters
  char line[MAX_LEN + 1];
  char longest[MAX_LEN + 1];

  while ((len = getLine(line)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0)
    printf("Max Length: %d\nLine: %s\n", max, longest);

  return 0;
}

int getLine(char s[]) {
  char c;
  int i;
  for (i = 0; i < MAX_LEN && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
    return i;
  }

  s[i] = '\0';

  while ((c = getchar()) != EOF && c != '\n') {
    ++i;
  }

  return i;
}

void copy(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;
}