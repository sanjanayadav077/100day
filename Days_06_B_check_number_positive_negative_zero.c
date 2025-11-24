#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    
    if(a>0){
        printf("a is positive %d",a);
    }
    else if(a==0){
        printf("a is zero %d",a);
    }
    else{
        printf("a is negative %d",a);
    }
    return 0;
 }