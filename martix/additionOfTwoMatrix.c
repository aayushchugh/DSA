#include <stdio.h>

#define SIZE 3  // Size of the matrices

// Function to add two matrices
void addMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
  for(int i = 0; i < SIZE; i++) {
    for(int j = 0; j < SIZE; j++) {
      result[i][j] = a[i][j] + b[i][j];
    }
  }
}

int main() {
  int a[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int b[SIZE][SIZE] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
  int result[SIZE][SIZE];

  addMatrices(a, b, result);

  // Print the result
  for(int i = 0; i < SIZE; i++) {
    for(int j = 0; j < SIZE; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}