/*
Write a  program to check whether numbers in a vector can be rearranged so that each number appears exactly once in a consecutive list of numbers. Return true otherwise false.

{1,3,2} -> true
{1,4,2} -> false
*/

#include <stdio.h>
#include <stdbool.h> //to use bool

void sort(int arr[],int n) {
    int temp;
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            };
        };
    };
};

bool checkConsecutive(int arr[],int n) {
    sort(arr,n);
    for (int i=0;i<n-1;i++) {
        if (arr[i] + 1 != arr[i+1]) {
            return false;
        };
    };
    return true;
};

int main() {
    int arr[5] = {1,3,2,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    if (checkConsecutive(arr,n)) {
        printf("True\n");
    } else {
        printf("Flase\n");
    };
    return 0;
}