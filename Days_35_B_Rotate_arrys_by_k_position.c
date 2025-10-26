//Rotate an array to the right by k positions
#include<stdio.h>
int main(){
    int size,k;
    printf("enter the size of the element");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("enter the number of position to rotate");
    scanf("%d",&k);
    k=k%size;
    int start=0;
    int end=size-1;
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    start=0;
    end=k-1;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    start=k;
    end=size-1;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("arrays after rotation\n");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}