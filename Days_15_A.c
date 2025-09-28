#include<stdio.h>
int main(){
    int fact=1;
    int i=1;
    int num;
    printf("enter number");
    scanf("%d",&num);
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("factorial=%d\n",fact);
    return 0;
}