//Read and print elements of a one-dimensional array.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number you want to print");
    scanf("%d",&n);
    int arr[n];
    printf("element number%d\n",n);
    for(int i=0;i<n;i++){
        printf("element %d",n+1);
        scanf("%d",&arr[i]);
    }
    printf("The element in the arrays:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}