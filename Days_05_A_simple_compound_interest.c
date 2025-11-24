#include<stdio.h>
#include<math.h>
int main(){
    float rate,time,principal;
    float simpleinterest,compoundinterest,amount;
    printf("enter your rate,time,principal respectively");
    scanf("%f %f %f",&rate,&time,&principal);
    
    simpleinterest=(rate*time*principal)/100;
    amount=principal*pow((1+rate/100),time);
    compoundinterest=amount-principal;
    printf("simpleinterest=%.2f\n",simpleinterest);
    printf("amount=%.2f\n",amount);
    printf("compound interest=%.2f\n",compoundinterest);
    return 0;
}