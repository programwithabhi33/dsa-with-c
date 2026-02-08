#include <stdio.h>

void display(int arr[], int arrSize){
   for (int i = 0; i < arrSize; i++) {
    printf("%d ", arr[i]);
   } 
}

int insertion(int arr[], int arrSize, int arrCapacity, int indexToInsert, int valueToInsert){
   if (arrSize >= arrCapacity) {
    printf("Array is full");
    return 0;
   }

   for (int i = arrSize - 1; i >= indexToInsert; i--) {
    arr[i + 1] = arr[i];
   }

   arr[indexToInsert] = valueToInsert;
   arrSize++;
   
   return 1;
}

int main() {
   int arr[100] = {7, 8, 22, 88};
   printf("Before insertion: ");
   display(arr, 4);
   int insertionResult = insertion(arr, 4, 100, 2, 4);
   if (insertionResult) {
    printf("After insertion: ");
    display(arr, 5);
   }
   return 0; 
}