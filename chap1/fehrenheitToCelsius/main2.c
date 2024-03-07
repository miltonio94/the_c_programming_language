#include <stdio.h>

// Print fahrenheit to celsius table
int main() {
  float fahr = 0., celsius = 0.;

  int lower = 0;
  int upper = 300;
  int step = 20;

  while (fahr <= upper) {
    celsius = (5. / 9.) * (fahr - 32.);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr += step;
  }
}
