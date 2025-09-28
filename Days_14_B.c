#include<stdio.h>
int main(){
    int num,product=1;
    int i;
    printf("enter number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2==0){
            product=product*i;
        }
    }
    printf("product=%d\n",product);
    return 0;
}
    