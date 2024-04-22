#include <stdio.h>

void fibonacci(int n) {
  int t1 = 0, t2 = 1, nextTerm;

  for (int i = 1; i <= n; ++i) {
    printf("%d, ", t1);
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
  }
}

int main() {
  int n;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  fibonacci(n);

  return 0;
}