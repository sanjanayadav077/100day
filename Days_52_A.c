//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>
int main() {
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter value x: ");
    scanf("%d", &x);
    int index = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;   // first occurrence of ceil
            break;       // stop after first match
        }
    }
    printf("Ceil index: %d\n", index);
    return 0;
}
