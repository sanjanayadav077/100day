#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter your number");
    scanf("%d %d ",&a,&b);
    printf("before swaping a is %d\n",a);
    printf("before swaping b is %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("after swaping:a=%d,b=%d\n",a,b);
    return 0;


}