//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int *arr = (int*)malloc(n * sizeof(int));
    if (!arr) return 0;
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
    int k;
    if (scanf("%d", &k) != 1) {
        free(arr);
        return 0;
    }
    if (k <= 0 || k > n) {
        printf("-1\n");
        free(arr);
        return 0;
    }
    int *dq = (int*)malloc(n * sizeof(int));
    int head = 0, tail = -1; 
    for (int i = 0; i < n; ++i) {
        while (head <= tail && dq[head] <= i - k) head++;
        while (head <= tail && arr[dq[tail]] <= arr[i]) tail--;
        dq[++tail] = i;
        if (i >= k - 1) {
            if (i > k - 1) printf(" ");
            printf("%d", arr[dq[head]]); 
        }
    }
    printf("\n");
    free(arr);
    free(dq);
    return 0;
}