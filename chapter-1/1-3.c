#include <stdio.h>

/*
Exercise 1-3. Modify the temperature conversion program to print a heading above
the table.
*/

int main() {
  printf("Fahrenheit\t");
  printf("Celsius\n");

  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%10.0f\t%7.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}