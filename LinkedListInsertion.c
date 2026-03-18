#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

void DisplayLinkedList(struct Node *ptr) {
  while (ptr != NULL) {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
  }
}

struct Node *insertAtBeginningOfLinkedList(struct Node *head, int data) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = head;
  return ptr;
}

void insertAtEndOfLinkedList(struct Node *head, int data) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = head;

  while (p->next != NULL) {
    p = p->next;
  }
  p->next = ptr;
  ptr->next = NULL;
}

void insertInBetweenOfLinkedList(struct Node *head, int data, int index) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = head;
  int i = 0;

  while (i != index - 1) {
    p = p->next;
    i++;
  }
  ptr->next = p->next;
  p->next = ptr;
}

void insertAfterNodeInLinkedList(struct Node *node, int data) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;

  ptr->next = node->next;
  node->next = ptr;
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

  printf("LinkedList Before Insertion\n");
  DisplayLinkedList(head);

  printf("\nLinkedList After Insertion\n");
  // head = insertAtBeginningOfLinkedList(head, 6);
  // insertAtEndOfLinkedList(head, 10);
  // insertInBetweenOfLinkedList(head, 10, 2);
  insertAfterNodeInLinkedList(second, 11);
  DisplayLinkedList(head);
}
