#include <stdio.h>
#include <stdlib.h>

// Linked List initialization
struct Node {
  int data;
  struct Node *next;
};

// Display Linked List Fn
void DisplayLinkedList(struct Node *head) {
  struct Node *ptr = head;
  do {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
  } while (ptr != head);
}

struct Node *insertAtFirst(struct Node **head, int data) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  struct Node *iterationPtr = (*head);

  ptr->data = data;
  ptr->next = (*head);

  while (iterationPtr->next != (*head)) {
    iterationPtr = iterationPtr->next;
  }
  iterationPtr->next = ptr;
  return ptr;
}

void main() {
  struct Node *head, *second, *third;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  head->data = 7;
  head->next = second;

  second->data = 8;
  second->next = third;

  third->data = 9;
  third->next = head;

  printf("Linked List Before Insertion\n");
  DisplayLinkedList(head);

  printf("\nLinked List After Insertion\n");
  head = insertAtFirst(&head, 6);
  DisplayLinkedList(head);
}
