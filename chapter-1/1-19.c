#include <stdio.h>

/*
Exercise 1-19. Write a function reverse(s) that reverses the character string s.
Use it to write a program that reverses its input a line at a time
*/

#define MAX_LEN 100

int getLine(char line[]);
void reverse(char line[], int length);

int main() {
  int length;
  char line[MAX_LEN];
  while ((length = getLine(line)) != EOF) {
    reverse(line, length);
    printf("%s\n", line);
  }

  return 0;
}

int getLine(char line[]) {
  int i;
  char c;
  for (i = 0; i < MAX_LEN - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (i == 0 && c == EOF) {
    return EOF;
  }

  line[i] = '\0';
  return i;
}

void reverse(char line[], int length) {
  if (length == 0)
    return;

  char temp[length + 1];
  int i = 0;
  for (int j = length - 1; j >= 0; --j) {
    temp[i] = line[j];
    ++i;
  }

  temp[i] = '\0';
  for (i = 0; i < length; ++i) {
    line[i] = temp[i];
  }
}