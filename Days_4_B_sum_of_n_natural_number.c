#include<stdio.h>
int main(){
    int n,sum,count;
    printf("enter number");
    scanf("%d",&n);
    sum=0;
    for(count=1;count<=n;count++){
        sum=sum+count;
    }
    printf("sum of n natural number=%d",sum);
    return 0;
    
}