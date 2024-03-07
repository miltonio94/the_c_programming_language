#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// Print fahrenheit to celsius table
int main() {
  int fahr;

  for (fahr = 0; fahr <= UPPER; fahr += STEP) {
    printf("%3d %6.1f\n", fahr, (5. / 9.) * (fahr - 32));
  }
}
