#include<stdio.h>
int main(){
    int reverse=0,remainder,num;
    printf("enter your number to reverse");
    scanf("%d",&num);
    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    printf("%d reverse",reverse);
    return 0;
}