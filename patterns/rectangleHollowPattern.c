/**
 * Given rows and columns print a rectangle which is hollow from inside
 * 
 * @example
 * Input: 5 rows and 5 cols
 * | ***** |
 * | *   * |
 * | *   * |
 * | *   * |
 * | ***** |
*/

#include <stdio.h>

int main()
{
  int rows, columns;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &rows, &columns);

  for (int i = 1; i<=rows; i++) {
    for (int j = 1; j<=columns; j++) {
      if (i == 1 || i == rows || j == 1 || j == columns) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    
    printf("\n");
  }

  return 0;
}