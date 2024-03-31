#include <stdio.h>

int main() {
  int arr[] = {5, 2, 3, 1,10, 4};
  int n = 6;
  int counter = 1;

  while (counter < n)
  {
    for (int i = 0; i < n-counter; i++)
    {
      if (arr[i] > arr[i+1]) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
      }
    }
    counter++;
  }
  
  printf("Sorted array: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}