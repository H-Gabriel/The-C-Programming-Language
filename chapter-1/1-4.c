#include <stdio.h>

/*
Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit
table.
*/

int main() {
  printf("Celsius\t\t");
  printf("Fahrenheit\n");

  float fahr, celsius;
  float lower, upper, step;

  lower = -17.8;
  upper = 148.9;
  step = 11.1;

  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32;
    printf("%7.1f\t\t%10.0f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}