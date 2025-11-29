//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>
int main() {
    int m, n;
    scanf("%d", &m);
    int arr1[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);
    scanf("%d", &n);
    int arr2[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    int merged[m + n];
    int i = 0, j = 0, k = 0;
    // Merge until one array is exhausted
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }
    // Copy remaining elements
    while (i < m)
        merged[k++] = arr1[i++];
    while (j < n)
        merged[k++] = arr2[j++];
    // Print merged array
    for (int x = 0; x < m + n; x++) {
        printf("%d", merged[x]);
        if (x != m + n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}