#include<stdio.h>
#include<math.h>
int main(){
    int number,digit,divide=1,first,end,swap,middle;
    printf("enter number");
    scanf("%d",&number);
    digit=(int)log10(number);
    divide=pow(10,digit);
    first=number/divide;
    end=number%10;
    middle=(number%divide)/10;
    swap=end*divide+middle*10+first;
    printf("%d",swap);
    return 0;
}