//Insert an element in an array at a given position.
#include<stdio.h>
int main(){
    int size;
    printf("enter the size of element");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d \n",arr[i]);
    }
    int pos,element;
    printf("enter position to insert",size+1);
    scanf("%d",&pos);
    printf("enter element to insert");
    scanf("%d",&element);
    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;
    size++;
    printf("array after insertaion\n");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;

}