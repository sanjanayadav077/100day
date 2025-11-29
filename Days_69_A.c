//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int seen[n+1];         
    for (int i = 0; i <= n; i++)
        seen[i] = 0;
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }
    return 0;
}
