#include <stdio.h>

/*
Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to uise
a function for conversion
*/

float toCelsius(float fahr);

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
    printf("%10.0f\t%7.1f\n", fahr, toCelsius(fahr));
    fahr = fahr + step;
  }

  return 0;
}

float toCelsius(float fahr) { return (5.0 / 9.0) * (fahr - 32.0); }