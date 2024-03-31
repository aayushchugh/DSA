#include <stdio.h>

int main() {
  int n = 5;

  int arr[] = {10,20,2, 45, 3};

  for (int i = 1; i < n; i++)
  {
    int current = arr[i];
    int j = i -1;

    // shift elements of arr[0..i-1], that are greater than current, to one position ahead of their current position
    while (arr[j] > current && j>=0)
    {
      arr[j+1] = arr[j];
      j--;
    }
    
    arr[j+1] = current;
  }
  
  printf("\n");
  printf("Sorted array: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  
  return 0;
}