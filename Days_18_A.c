#include<stdio.h>
int main(){
    int num,factor;
    printf("enter number");
    scanf("%d",&num);
    printf("factor of %d are",num);
    for (int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d\n",i);
        }
    }
    printf("\n");
    return 0;

    
}