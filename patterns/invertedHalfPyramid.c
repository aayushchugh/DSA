/**
 * Print a half inverted pyramid
 * 
 * @example
 * 
 * Input:
 * Enter a number: 5
 * Output:
 * | * * * * * |
 * | * * * *   |
 * | * * *     |
 * | * *       |
 * | *         |
*/

#include <stdio.h>

int main() {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = n; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
    printf  ("* ");
    }
    
    printf("\n");
  }
  
  
  return 0;
}