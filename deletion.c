
#include <stdio.h>

void display(int arr[], int arrSize){
   for (int i = 0; i < arrSize; i++) {
    printf("%d ", arr[i]);
   } 
}

void deletion(int arr[], int arrSize, int indexToDelete){
   for (int i = indexToDelete; i < arrSize - 1; i++) {
    arr[i] = arr[i + 1];
   }
}

int main() {
   int arr[100] = {7, 8, 22, 88};
   int arrSize = 4;

   printf("Before Deletion: ");
   display(arr, arrSize);
   printf("\n");

   printf("After Deletion: ");
   deletion(arr, 4, 2);
   arrSize -= 1;
   display(arr, arrSize);

   return 0; 
}
