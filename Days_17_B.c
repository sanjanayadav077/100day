#include<stdio.h>
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num<1){
        printf("%d is not prime number",num);
    }
    else if(num<3){
        printf("%d is prime number",num);
    }
    else if(num%2==0){
        printf("%d is not prime",num);
    }
    else if(num%3==0){
        printf("%d is not prime number");
    }
    else{
        printf("%d is prime number",num);
    }
    return 0;
}