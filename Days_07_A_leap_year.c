#include<stdio.h>
int main(){
    int y;
    printf("enter year");
    scanf("%d",&y);

    if((y%4==0 && y%100!=0 ) || ( y%100!=0)){
        printf("y is leap year %d",y);
    }
    else{
        printf("y is not leap year %d",y);
    }
    return 0;
}