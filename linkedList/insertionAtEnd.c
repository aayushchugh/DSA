#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

/**
 * Traverse through the linked list and also return the tail node
 * @param head head pointer of the linked list
 * @returns tail node of the linked list
*/
struct Node* traverseAndReturnLastNode(struct Node* head) {
  struct Node* tailNode;

  while (head != NULL)
  {
    printf("Element %d\n", head -> data);

    // find the last node
    if (head -> next == NULL) {
      tailNode = head;
    }

    head = head -> next;
  }

  return tailNode;
}

/**
 * Insert a new node at the end of linked list
 * @param data data of new 
 * @param tailNode tail node of the linked list
*/
void insertAtEnd(int data, struct Node* tailNode) {
  // occupy more memory for new element
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  // update last element's next
  tailNode -> next = newNode;

  // add data in new element
  newNode -> data = data;
  newNode -> next = NULL;
}

int main() {
  int insertionData;
  struct Node* tailNode;

  struct Node* head = (struct Node*)malloc(sizeof(struct Node));
  struct Node* second = (struct Node*)malloc(sizeof(struct Node));
  struct Node* third = (struct Node*)malloc(sizeof(struct Node));

  head -> data = 1;
  head -> next = second;

  second -> data = 2;
  second -> next = third;

  third -> data = 3;
  third -> next = NULL;

  printf("Before insertion \n");
  tailNode = traverseAndReturnLastNode(head);

  printf("Enter a element to insert \n");
  scanf("%d", &insertionData);
  insertAtEnd(insertionData, tailNode);

  traverseAndReturnLastNode(head);

  return 0;
}