#include <stdio.h>

int search(int arr[], int low, int high, int q) {
  while (low <= high)
  {
    int mid = low + (high - low)/2;

    if (arr[mid] == q) {
      return mid;
    } else if(arr[mid] < q ) {
      low = mid + 1;
    } else {
      high = mid -1;
    }
  }
  
  return -1;
}

int main() {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int q;

  printf("Enter an element to search: ");
  scanf("%d", &q);

  int result = search(arr, 0, 9, q);

  if (result == -1) {
    printf("Element not found\n");
  } else {
    printf("Element found at index: %d\n", result);
  }

  return 0;
}