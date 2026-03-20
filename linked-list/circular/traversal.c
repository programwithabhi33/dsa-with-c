
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

  DisplayLinkedList(head);
}
