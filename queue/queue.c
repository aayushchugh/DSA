#include <stdio.h>
#include <stdbool.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

bool isFull() {
 return front == MAX - 1;
}

bool isEmpty() {
  return front == -1 || rear == -1 || front > rear;
}

void enq (int data) {
  if (isFull()) {
    printf("Queue is full \n");
    return;
  }

  if (front == -1) {
    front++;
  }

  rear++;
  queue[rear] = data;
}

void deq() {
  if (isEmpty()) {
    printf("Queue is empty \n");
    return;
  }

  front++;
}

int peek() {
  if (isEmpty()) {
    printf("Queue is empty \n");
    return 0;
  }

  return queue[front];
}

int main() {
  enq(4);
  enq(1);
  enq(2);
  enq(3);

  int a = peek();
  printf("Peek: %d \n", a);

  return 0;
}