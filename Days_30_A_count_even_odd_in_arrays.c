#include<stdio.h>
int main(){
    int i,n;
    printf("enter number to count even and odd");
    scanf("%d",&n);
    int arr[100];
    printf("enter the %d element\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even=0;
    int odd=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("count of even number%d\n",even);
    printf("count of odd number%d\n",odd);
    return 0;
}