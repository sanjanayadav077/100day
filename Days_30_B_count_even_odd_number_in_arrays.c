#include<stdio.h>
int main(){
    int i,n;
    printf("enetr the total element to count ");
    scanf("%d",&n);
    int arr[100];
    printf("enter the%d element\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int positive=0;
    int negative=0;
    int zero=0;
    for(i=0;i<n;i++){
        if(arr[i]>0)
        positive++;
        else if(arr[i]<0)
        negative++;
        else
        zero++;
    }
    printf("total number of positive number%d\n",positive);
    printf("total number of negative number%d\n",negative);
    printf("total number of zero%d\n",zero);
    return 0;
}