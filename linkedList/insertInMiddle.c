#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
    struct Node* next;
};

/**
 * Print all the nodes of the linked list
 * @param head head head of the linked list
*/
void traverseLL(struct Node* head) {
  while (head != NULL) {
    printf("%d \n", head -> data);
    head = head -> next;
  }
}

/**
 * Insert a new node in the linked list
 * @param data data of head
 * @param beforeNode the node before the node to be inserted
 * @param afterNode the node which will be after the node to be inserted
*/
void insertNode( int data, struct Node* beforeNode, struct Node* afterNode) {
  struct Node* nodeAtGivenIndex;
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  beforeNode -> next = newNode;

  newNode -> data = data;
  newNode -> next = afterNode;
}

int main() {
  struct Node* head = (struct Node*)malloc(sizeof(struct Node));
  struct Node* second = (struct Node*)malloc(sizeof(struct Node));
  struct Node* third = (struct Node*)malloc(sizeof(struct Node));
  struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

  head -> data = 1;
  head -> next = second;

  second -> data = 2;
  second -> next = third;

  third -> data = 3;
  third -> next = fourth;

  fourth -> data = 4;
  fourth -> next = NULL;

  printf("Before insertion \n");
  traverseLL(head);

  insertNode(10, second, third);

  printf("After insertion \n");
  traverseLL(head);


  return 0;
}