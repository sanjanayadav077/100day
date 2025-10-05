//Find the maximum and minimum element in an array.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d element\n");
    for(int i=0;i<n;i++){
        printf("element%d\n",i+1);
        scanf("%d",arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];


    }
    printf("max%d",max);
    printf("min%d",min);
    return 0;
}