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
  // display forward elements from doubly linked list
  printf("Forward element printing\n");
  do {
    printf("Element is: %d\n", head->data);
    head = head->next;
  } while (head->next != NULL);
  // To display the last element
  printf("Element is: %d\n", head->data);

  printf("Backward element printing\n");
  // display reverse elements from doubly linked list
  do {
    printf("Element is: %d\n", head->data);
    head = head->prev;
  } while (head->prev != NULL);
  // To display the last element from reverse (first element)
  printf("Element is: %d\n", head->data);
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
