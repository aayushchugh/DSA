#include <stdio.h>

void insertAtStart(int arr[], int size, int element, int result[]) {
  result[0] = element;
  for (int i = 0; i < size; i++) {
    result[i + 1] = arr[i];
  }
}

int main()
{
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int result[size + 1];

  int elementToInsert;
  printf("Enter the element to insert: \n");
  scanf("%d", &elementToInsert);

  insertAtStart(arr, size, elementToInsert, result);

  printf("The array after insertion is: \n");
  for (int i = 0; i < size + 1; i++) {
    printf("%d ", result[i]);
  }
}