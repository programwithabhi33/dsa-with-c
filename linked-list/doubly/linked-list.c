#include <stdio.h>
#include <stdlib.h>

// Linked List initialization
struct Node {
  int data;
  struct Node *prev;
  struct Node *next;
};

// Dispaly doubly linked list elements in forward and reverse both orders
void traversal(struct Node *head) {
  struct Node *last;

  // display forward elements from doubly linked list
  printf("Forward element printing\n");
  while (head != NULL) {
    printf("Element is: %d\n", head->data);
    last = head;
    head = head->next;
  };

  printf("Backward element printing\n");
  // display reverse elements from doubly linked list
  while (last != NULL) {
    printf("Element is: %d\n", last->data);
    last = last->prev;
  };
}

void main() {
  struct Node *head, *second, *third;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  head->data = 7;
  head->prev = NULL;
  head->next = second;

  second->data = 8;
  second->prev = head;
  second->next = third;

  third->data = 9;
  third->prev = second;
  third->next = NULL;

  traversal(head);
}
