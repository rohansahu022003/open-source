#pragma once
void selectionsort(int arr[], int n);
void printArray(int arr[], int size);
void main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
}
