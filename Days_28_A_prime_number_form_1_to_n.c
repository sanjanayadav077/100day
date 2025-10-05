#include<stdio.h>
int main(){
    int num,i;
    printf("enter number");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        if(i%2!=0 && i%3!=0){
            printf("prime=%d\n",i);
        }
       
    }
    return 0;
}       