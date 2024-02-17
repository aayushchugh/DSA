#include <stdio.h>

int main()
{
  int arr[100] = {1, 2, 3, 4, 5};
  int numElements = 5;  // Keep track of the number of elements in the array

  int noOfElementsToInsert;

  printf("Enter the number of elements to insert: \n");
  scanf("%d", &noOfElementsToInsert);

  printf("Enter the element to insert: \n");
  for (int i=  0; i < noOfElementsToInsert; i++ ) {
    scanf("%d", &arr[numElements + i]);
  }
  numElements += noOfElementsToInsert;  // Update the number of elements

  printf("The array after insertion is: \n");
  for (int i = 0; i < numElements; i++) {
    printf("%d ", arr[i]);
  }
}