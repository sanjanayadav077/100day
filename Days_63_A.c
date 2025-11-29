//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int k;
    scanf("%d", &k);
    qsort(arr, n, sizeof(int), compare);
    if (k >= 1 && k <= n)
        printf("%d\n", arr[k - 1]);
    else
        printf("Invalid k\n");

    return 0;
}