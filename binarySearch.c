#include <stdio.h>

int binarySearch(int arr[], int arrSize, int elementToSearch){
    int low = 0;
    int high = arrSize - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == elementToSearch) {
            return mid;
        }
        if (arr[mid] < elementToSearch) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int elementToSearch = 9;

    int result = binarySearch(arr, arrSize, elementToSearch);
    if (result != -1) {
        printf("Element %d found at index %d\n", elementToSearch, result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}