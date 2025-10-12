#include<stdio.h>
int main(){
    int i,n,key;
    int found=0;
    printf("enter the total element");
    scanf("%d",&n);
    int arr[100];
    printf("enetr %d element\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enetr number to search");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
        printf("element found %d at index%d\n",key,i);
        found=1;
        break;
      }
    }
    if(!found){
        printf("element not %d found\n",key);
    }
    return 0;
}