#include<stdio.h>
int main(){
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    printf("value before swaping a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swaping a=%d,b=%d\n",a,b);
    return 0;

}