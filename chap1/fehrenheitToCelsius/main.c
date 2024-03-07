#include <stdio.h>

// Print fahrenheit to celsius table
int main() {
  int fahr = 0, celsius = 0;

  int lower = 0;
  int upper = 300;
  int step = 20;

  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%3d %6d\n", fahr, celsius);
    fahr += step;
  }
}
