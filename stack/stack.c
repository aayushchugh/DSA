#include <stdio.h>
#include <stdbool.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

bool isEmpty() {
  return top == MAX - 1;
}

void push(int data) {
  if (isEmpty()) {
    printf("Stack overflowed");
    return;
  }
  
  top++;
  stack_arr[top] = data;
}

void printStack() {
  for(int i=0;i<MAX;i++){
  printf("%d \n",stack_arr[i]);}
}

int main() {
  push(10);
  push(11);
  push(12);
  push(12);
  push(12);

  printStack();
  return 0;
}