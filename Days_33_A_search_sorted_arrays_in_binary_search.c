//Search in a sorted array using binary search.
#include<stdio.h>
int main(){
    int key,high,low,mid,size,found=0;
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter %d element",size);
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("enter the element to search");
    scanf("%d",&key);
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("element %d found at %d index",key,mid);
            found=1;
            break;
        }
        else if (key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(!found){
        printf("elemnt %d is not found",key);
    }
    return 0;
}