#include <stdio.h>

int main () {
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;
  int result[size - 1];
  for (int i = 0; i < size - 1; i++) {
    result[i] = arr[i];
  }
  
  for (int i = 0; i < size - 1; i++) {
    printf("%d ", result[i]);
  }
  
  return 0;
}