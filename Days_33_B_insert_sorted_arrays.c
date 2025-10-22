//Insert an element in a sorted array at the appropriate position.
#include<stdio.h>
int main(){
    int size,pos,element;
    printf("enter the size of element");
    scanf("%d",&size);
    int arr[100];
    printf("enter the sorted arays",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    printf("enter the element to search");
    scanf("%d",&element);
    pos=0;
    while(pos<size && arr[pos]<element){
        pos++;
    }
    for(int i=0;i<size;i++){
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
    size++;
    printf("array after insertion");
    for(int i=0;i<size;i++){
        printf("%d",size);
    }
    printf("\n");
    return 0;
}