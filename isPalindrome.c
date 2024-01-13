#include <stdio.h>

int main() {
  int n = 121;
  int remainder, reverse = 0;

  while (n != 0 && n > 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  if (n == reverse) {
    return 1;
  } else {
    return 0;
  }
}