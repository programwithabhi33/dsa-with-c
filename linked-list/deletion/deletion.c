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
void deleteFirstNodeFromLinkedList(struct Node **head) {
  struct Node *ptr = *head;
  *head = (*head)->next;
  free(ptr);
  ptr = NULL;
}

// Case second: Delete the node from linked list at index
void deleteNodeFromLinkedListAtIndex(struct Node *head, int index) {
  struct Node *ptr = head;
  struct Node *iterationPtr;
  int i = 0;
  while (i != (index - 1)) {
    ptr = ptr->next;
    i++;
  }
  iterationPtr = ptr->next;
  ptr->next = iterationPtr->next;
  free(iterationPtr);
  iterationPtr = NULL;
}

// Case third: Delete the last node from linked
void deleteTheLastNodeFromLinkedList(struct Node *ptr) {
  while (ptr->next->next != NULL) {
    ptr = ptr->next;
  }
  free(ptr->next);
  ptr->next = NULL;
}

// Case fourth: Delete the first node from linked with given value
void deleteFirstNodeFromLinkedWithGivenValue(struct Node *head, int value) {
  struct Node *ptr = head;
  struct Node *deleteValuePtr;
  while (ptr->next->data != value && ptr->next->next != NULL) {
    ptr = ptr->next;
  }
  if (ptr->next->next != NULL) {
    deleteValuePtr = ptr->next;
    ptr->next = ptr->next->next;
    free(deleteValuePtr);
  }
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
  // deleteFirstNodeFromLinkedList(&head);
  // deleteNodeFromLinkedListAtIndex(head, 2);
  // deleteTheLastNodeFromLinkedList(head);
  deleteFirstNodeFromLinkedWithGivenValue(head, 2);
  DisplayLinkedList(head);
}
