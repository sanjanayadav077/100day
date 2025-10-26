//Delete an element from an array.
#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the element");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    int pos;
    printf("enter the position to delete");
    scanf("%d",&pos);
    if(pos<0 || pos>size){
        printf("invalid element");
    }
    else {
        for(int i=pos;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
        printf("element after deletion");
        for(int i=0;i<size;i++){
            printf("%d",arr[i]);
        }
    }
    return 0;
}