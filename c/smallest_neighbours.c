/*
Write a program that returns the elements
in a vector that are strictly smaller than their adjacent left and right neighbours.

({7, 2 ,5, 3, 1, 5, 6}) -> 2, 1
({1, 2 ,5, 0, 3, 1, 7}) -> 0, 1
*/

#include <stdio.h>
#include <stdlib.h>

int *new_arr = NULL;
int size = 0;

void arrayAppend(int element) {
    size++;
    new_arr = (int*)realloc(new_arr,size*sizeof(int));
    new_arr[size-1] = element;
};

void smallestNeighbour(int arr[],int n) {
    if (arr[0]<arr[1]) {
        arrayAppend(arr[0]);
    };

    for (int i=1;i<n-1;i++) {
        if (arr[i] < arr[i+1] && arr[i]<arr[i-1]) {
            arrayAppend(arr[i]);
        };
    };

    if (arr[n-1]<arr[n-2]) {
        arrayAppend(arr[n-1]);
    };
};


int main() {
    int arr[] = {7, 2 ,5, 3, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    smallestNeighbour(arr,n);

    for (int i=0;i<size;i++) {
        printf("%d ", new_arr[i]);
    };
    printf("\n");

    free(new_arr);

    return 0;
}