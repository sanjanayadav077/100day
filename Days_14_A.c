#include<stdio.h>
int main(){
    int sum=0;
    int i;
    int num;
    printf("enter number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("sum of odd number%d\n",sum);
    return 0;
}