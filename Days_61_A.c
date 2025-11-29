//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int *arr = (int*)malloc(n * sizeof(int));
    if (!arr) return 0;
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 0;
        }
    }
    int k;
    if (scanf("%d", &k) != 1) {
        free(arr);
        return 0;
    }
    if (k <= 0 || k > n) {
        free(arr);
        return 0;
    }
    int *q = (int*)malloc(n * sizeof(int));
    if (!q) {
        free(arr);
        return 0;
    }
    int head = 0, tail = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) q[++tail] = i;
        while (head <= tail && q[head] <= i - k) head++;
        if (i >= k - 1) {
            if (i > k - 1) printf(" ");
            if (head <= tail) {
                printf("%d", arr[q[head]]);
            } else {
                printf("0");
            }
        }
    }
    printf("\n");
    free(arr);
    free(q);
    return 0;
}