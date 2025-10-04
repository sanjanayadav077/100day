#include<stdio.h>
int main(){
    int a,b,sum,diff,product,quotient;
    printf("enter your two number");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    product=a*b;
    quotient=a/b;
    printf("sum=%d\n",sum);
    printf("subtraction=%d\n",diff);
    printf("multiplication=%d\n",product);
    printf("division=%d\n",quotient);
    return 0;
}