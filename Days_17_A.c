#include<stdio.h>
int main(){
    int remainder,num,product=0,originalnumber;
    printf("enter your number");
    scanf("%d",&num);
    originalnumber=num;
    while(num>0){
        remainder=num%10;
        product=product+(remainder*remainder*remainder);
        num=num/10;
    }
    if(originalnumber==product){
        printf("it's armstrong number%d\n",product);
    }
    else{
        printf("it's not armstrong number%d\n",product  );
    } 
    return 0;
}