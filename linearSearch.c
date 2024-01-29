#include <stdio.h>

int main () 
{
  int arr[5];
  int search;

  printf("Please enter a array \n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter a number to search \n");
  scanf("%d", &search);
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] == search) {
      printf("Element found at index: %d\n", i);
      break;
    }
  }
  
  return 0;
}