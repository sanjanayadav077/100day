#include<stdio.h>
int main(){
    int time,hour,minute,second;
    printf("enter your time in second");
    scanf("%d",&time);
    hour=time/3600;
    minute=time/60;
    second=time/1;
    printf("%d:%d:%d",hour,minute,second);
    return 0;


}