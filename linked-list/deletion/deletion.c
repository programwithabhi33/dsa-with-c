#include <stdio.h>
#include <stdlib.h>

// Linked List initialization
struct Node {
  int data;
  struct Node *next;
};

// Display Linked List Fn
void DisplayLinkedList(struct Node *ptr) {
  while (ptr != NULL) {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
  }
}

// Case first: Delete the first node from linked list
struct Node *deleteFirstNodeFromLinkedList(struct Node *head) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr = head->next;
  free(head);
  head = NULL;
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
  third->next = NULL;

  printf("LinkedList Before Deletion\n");
  DisplayLinkedList(head);

  printf("LinkedList After Deletion\n");
  head = deleteFirstNodeFromLinkedList(head);
  DisplayLinkedList(head);
}
