#include<stdio.h>
int main(){
    float celcius,f;
    printf("enter your temperature in celcius");
    scanf("%f",&celcius);
    f=(celcius*9/5)+32;
    printf("temperature in farenhite=%.2f\n",f);
    return 0;

}