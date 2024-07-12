#include <stdio.h>

/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging.
*/

/*
After compiling run ./a.out < 1-13.txt
on the terminal to use the text file as input.
 */

#define LENGTH 5

int main() {
  int wordSize = 0;
  int frequencies[LENGTH] = {0, 0, 0, 0, 0};
  int c;

  while ((c = getchar()) != EOF) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
      wordSize++;
    } else if (wordSize > 0) {
      int index;
      if (wordSize <= 3)
        index = 0;
      else if (wordSize <= 6)
        index = 1;
      else if (wordSize <= 9)
        index = 2;
      else if (wordSize <= 12)
        index = 3;
      else
        index = 4;

      frequencies[index]++;
      wordSize = 0;
    }
  }

  /*When the loop finds the EOF there has to be
  a last iteration to process the last word*/

  if (wordSize > 0) {
    int index;
    if (wordSize <= 3)
      index = 0;
    else if (wordSize <= 6)
      index = 1;
    else if (wordSize <= 9)
      index = 2;
    else if (wordSize <= 12)
      index = 3;
    else
      index = 4;

    frequencies[index]++;
    wordSize = 0;
  }

  int maxValue = 0;
  for (int i = 0; i < LENGTH; i++) {
    maxValue = frequencies[i] > maxValue ? frequencies[i] : maxValue;
  }

  while (maxValue > 0) {
    if (frequencies[0] == maxValue) {
      printf("* ");
      frequencies[0]--;
    } else {
      printf("  ");
    }

    if (frequencies[1] == maxValue) {
      printf("* ");
      frequencies[1]--;
    } else {
      printf("  ");
    }

    if (frequencies[2] == maxValue) {
      printf("*  ");
      frequencies[2]--;
    } else {
      printf("   ");
    }

    if (frequencies[3] == maxValue) {
      printf("*  ");
      frequencies[3]--;
    } else {
      printf("   ");
    }

    if (frequencies[4] == maxValue) {
      printf("*");
      frequencies[4]--;
    }
    printf("\n");
    maxValue--;
  }
  printf("3 6 9 12 15\n");

  return 0;
}