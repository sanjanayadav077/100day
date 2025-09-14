#include<stdio.h>
int main(){
    int a;
    printf("enter number:");
    scanf("%d",&a);

    if(a%2==0){
        printf("a is even %d",a);
    }
    else{
        printf("a is odd %d",a);
    }
    return 0;
    

}