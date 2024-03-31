#include <stdio.h>
#define SIZE 5

void printArr(int arr[]) {
  int i = 0;
  while ( i < SIZE)
  {
    printf("%d \n", arr[i]);
    i++;
  }
}

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int partition(int arr[], int l, int r) {
  int pivot = arr[r];
  int i = l - 1;
  
  for (int j = l; j < r; j++)
  {
    if (arr[j] < pivot) {
      i++;
      swap(arr, i, j);
    }
  }
  
  swap(arr, i + 1, r);
  return i + 1;
}

void quickSort(int arr[], int l, int r) {
  if (l < r) {
    int pi = partition(arr, l, r);
    quickSort(arr, l, pi - 1);
    quickSort(arr, pi + 1, r);
  }
}

int main() {
  int arr[SIZE] = {7,10,4,2,16};
  
  printf("Unsorted array \n");
  printArr(arr);

  quickSort(arr, 0, SIZE - 1);

  printf("Sorted array \n");
  printArr(arr);

  return 0;
}