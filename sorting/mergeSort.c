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

void merge(int arr[], int l, int m, int r) {
  int n1 = m -l+1;
  int n2 = r - m;

  // temp arrays
  int a[n1];
  int b[n2];

  for (int i = 0; i < n1; i++)
  {
    a[i] = arr[l+i];
  }

  for (int i = 0; i < n2; i++)
  {
    b[i] = arr[m+1+i];
  }
  
  int i = 0;
  int j = 0;
  int k = l;

  while (i < n1 && j < n2)
  {
    if (a[i] < b[j]) {
      arr[k] = a[i];
      k++;
      i++;
    } else {
      arr[k] = b[j];
      k++;
      j++;
    }
  }
  
  while (i < n1)
  {
    arr[k] = a[i];
    k++;
    i++;
  }
  
  while (j < n2)
  {
    arr[k] = b[j];
    k++;
    j++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = (l + r)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

int main() {
  int arr[SIZE] = {7,10,4,2,16};
  
  printf("Unsorted array \n");
  printArr(arr);

  mergeSort(arr, 0, SIZE - 1);

  printf("Sorted array \n");
  printArr(arr);

  return 0;
}