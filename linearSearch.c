#include <stdio.h>


int linerSearch(int arr[], int arrSize, int elementToSearch){
   for (int i = 0; i < arrSize; i++) {
    if (arr[i] == elementToSearch) {
        return i; 
    } 
   } 
   return -1; 
}
int main(){
    int arr[] = {1, 2, 23, 24, 56, 78, 90, 88, 102};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int elementToSearch = 102;

    int result = linerSearch(arr, arrSize, elementToSearch);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

   return 0; 
}