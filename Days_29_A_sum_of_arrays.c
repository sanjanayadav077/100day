#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter number");
    scanf("%d",&n);
    int arr[n];
    printf("enter element %d\n",n);
    for(int i=0;i<n;i++){
        printf("element%d",i+1);
        scanf("%d",arr[i]);
        sum=sum+arr[i];
    }
    printf("sum=%d",sum);
    return 0;

}