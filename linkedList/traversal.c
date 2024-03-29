#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

/**
 * @param ptr pointer to the head of the linked list
*/
void linkedListTraversal(struct Node* ptr) {
  while (ptr != NULL) {
    printf("Element: %d\n", ptr -> data);
    ptr = ptr -> next;
  }
}

int main() {
  struct Node* head = (struct Node*)malloc(sizeof(struct Node));
  struct Node* second = (struct Node*)malloc(sizeof(struct Node));
  struct Node* third = (struct Node*)malloc(sizeof(struct Node));

  head -> data = 1;
  head -> next = second;

  second -> data = 2;
  second -> next = third;

  third -> data = 3;
  third -> next = NULL;

  linkedListTraversal(head);

  return 0;
}