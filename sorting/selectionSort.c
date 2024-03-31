#include <stdio.h>

int main() {
  int n = 5;
  int arr[] = {5,7,2,1,3};
  
  for (int i = 0; i < n; i++)
  {
    int min = i;
    for (int j = i+1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
  
  printf("Sorted array \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  
  return 0;
}