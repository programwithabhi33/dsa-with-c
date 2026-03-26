
// Stack data structure using array

#include <stdio.h>
#include <stdlib.h>

struct Stack {
  int size;
  int top;
  int *arr;
};

void displayStackArrayElements(struct Stack *ptr) {
  for (int i = 0; i <= ptr->top; i++) {
    printf("Stack array element is: %d\n", ptr->arr[i]);
  }
}

int checkIsStackFull(struct Stack *ptr) {
  if (ptr->top == (ptr->size - 1)) {
    return 1;
  }
  return 0;
}

// Push method
char *pushIntoStack(struct Stack *ptr, int value) {
  if (checkIsStackFull(ptr)) {
    return "Push operation in stack is failed due to stackoverflow\n";
  }
  ptr->top++;
  ptr->arr[ptr->top] = value;
  return "Push operation in stack is successfull\n";
}

// Peak to a position of stack from top to bottom, starting from number 1 to
// bottom elements
int peak(struct Stack *ptr, int position) {
  if (ptr->top - position + 1 < 0) {
    return 0;
  }
  return ptr->arr[ptr->top - position + 1];
}

int main() {
  struct Stack *s = malloc(sizeof(struct Stack));
  s->size = 7;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));

  printf("%s", pushIntoStack(s, 8));
  printf("%s", pushIntoStack(s, 9));
  printf("%s", pushIntoStack(s, 10));

  printf("Stack after push operations\n");
  displayStackArrayElements(s);

  printf("The element in position %d in stack is %d\n", 3, peak(s, 3));
  printf("The element in position %d in stack is %d\n", 1, peak(s, 1));

  return 0;
}
