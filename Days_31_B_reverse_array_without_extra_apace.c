#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("reverse array");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}