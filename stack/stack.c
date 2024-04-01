#include <stdio.h>
#include <stdbool.h>
#define SIZE 4

int stack_arr[SIZE];
int top = -1;

bool isFull() {
  return top == SIZE - 1;
}

bool isEmpty() {
  return top == -1;
}

void push(int data) {
  if (isFull()) {
    printf("Stack overflowed");
    return;
  }
  
  top++;
  stack_arr[top] = data;
}

void pop() {
  // check if stack is already empty
  if (isEmpty()) {
    printf("Stack is empty");
    return;
  }

  top--;
}

void printStack() {
  if (isEmpty()) {
    printf("Stack is empty \n");
    return;
  }
  for(int i=0;i<=top;i++){
  printf("%d \n",stack_arr[i]);}
}

int main() {
  push(10);
  push(11);
  push(12);
  push(12);
  push(12);

  printStack();
  printf("Popping \n");

  pop();

  printStack();

  return 0;
}