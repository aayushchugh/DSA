/**
* Given rows and columns print a rectangle out of it
* 
* @example:
* Input: 4 rows and 4 cols
* | * * * * |
* | * * * * |
* | * * * * |
* | * * * * |
* | * * * * |
*/

#include <stdio.h>

int main ()
{
  int rows, columns;

  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &rows, &columns);

  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < columns; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}