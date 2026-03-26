// Stack data structure using array

#include <stdio.h>
#include <stdlib.h>

struct Stack {
  int size;
  int top;
  int *arr;
};

int checkIsStackEmpty(struct Stack *ptr) {
  if (ptr->top == -1) {
    return 1;
  }
  return 0;
}
int checkIsStackFull(struct Stack *ptr) {
  if (ptr->top == (ptr->size - 1)) {
    return 1;
  }
  return 0;
}

int main() {
  struct Stack *s = malloc(sizeof(struct Stack));
  s->size = 7;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));

  s->arr[0] = 7;
  s->top++;
  if (checkIsStackEmpty(s)) {
    printf("Stack is empty\n");
  } else {
    printf("Stack is not empty\n");
  }

  if (checkIsStackFull(s)) {
    printf("Stack is full\n");
  } else {
    printf("Stack is not full");
  }
  return 0;
}
