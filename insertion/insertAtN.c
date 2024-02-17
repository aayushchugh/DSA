#include <stdio.h>

void insertAtPosition(int arr[], int size, int element, int position, int result[])
{
 for(int i = 0; i < position; i++) {
  result[i] = arr[i];
 }
 result[position] = element;
 for (int i = position + 1; i < size + 1; i++) {
  result[i] = arr[i - 1];
 }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;
  int element = 10;
  int position = 2;
  int result[size + 1];
  insertAtPosition(arr, size, element, position, result);
  for (int i = 0; i < size + 1; i++) {
    printf("%d ", result[i]);
  }
  return 0;
}