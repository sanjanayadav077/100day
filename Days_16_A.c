#include<stdio.h>
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    int binary[32];
    int i=0;
    if(num==0){
        printf("binary:0\n");
        return 0;
    }
    while(num>0){
        binary[i]=num%2;
        num=num/2;
        i++;
    }
    printf("binary: ");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    printf("\n");
    return 0;
}