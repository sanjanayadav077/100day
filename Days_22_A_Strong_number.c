#include<stdio.h>
int main(){
    int num,temp,digit,sum=0,fact,i;
    printf("enter number");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        digit=temp%10;
        fact=1;
        for(i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num){
        printf("%d is a strong number",num);
    }
    else{
        printf("%d is not strong number",num);
    }
    return 0;
}