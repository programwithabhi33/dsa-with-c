
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

// Push method
char *pushIntoStack(struct Stack *ptr, int value) {
  if (checkIsStackFull(ptr)) {
    return "Push operation in stack is failed due to stackoverflow\n";
  }
  ptr->top++;
  ptr->arr[ptr->top] = value;
  return "Push operation in stack is successfull\n";
}

int main() {
  struct Stack *s = malloc(sizeof(struct Stack));
  s->size = 3;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));

  s->arr[0] = 7;
  s->top++;

  printf("%s", pushIntoStack(s, 8));
  printf("%s", pushIntoStack(s, 9));
  printf("%s", pushIntoStack(s, 10));

  printf("Stack after push operations\n");
  displayStackArrayElements(s);

  return 0;
}
