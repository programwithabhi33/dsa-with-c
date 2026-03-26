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

// Pop method
char *popInStack(struct Stack *ptr) {
  if (checkIsStackEmpty(ptr)) {
    return "Pop operation in stack is failed due to stack does not contain any "
           "element\n";
  }
  ptr->arr[ptr->top] = 0;
  ptr->top--;
  return "Pop operation in stack is successfull\n";
}

int main() {
  struct Stack *s = malloc(sizeof(struct Stack));
  s->size = 3;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));

  s->arr[0] = 7;
  s->top++;

  printf("%s", popInStack(s));
  printf("%s", popInStack(s));

  printf("Stack after pop operations\n");
  displayStackArrayElements(s);

  return 0;
}
