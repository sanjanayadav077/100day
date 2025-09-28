#include<stdio.h>
int main(){
    char  operator;
    double num1,num2,result;
    printf("enter first number");
    scanf("%lf",&num1);
    printf("enter a operator");
    scanf("  %c",&operator);
    printf("enter second number");
    scanf("%lf",&num2);
    switch(operator){
        case '+':
        result=num1+num2;
        printf("%.2lf\n",result);
        break;
        case '-':
        result=num1-num2;
        printf("result%.2lf\n",result);
        break;
        case '*':
        result=num1*num2;
        printf("result%.2lf",result);
        break;
        case '/':
        result=num1/num2;
        printf("result%.2lf",result);
        break;
        default:
        printf("error invalid operator");

    }
    return 0;
}