#include<stdio.h>
int main(){
    int unit;
    int bill=0;
    printf("enter unit");
    scanf("%d",&unit);
    if(unit==0){
        printf("no bill");
    }
    else if(unit<=100){
        bill=unit*5;
        printf("bill %d\n",bill);
        
    }
    else if(unit<=200){
        bill=100*5+(unit-100)*7;
        printf("bill%d\n",bill);
        
    }
    else if(unit<=300){
        bill=100*5+100*7+100*10+(unit-200)*10;
        printf("bill%d\n",bill);
        
    }
    else{
        bill=100*5+100*7+100*10+(unit-300)*12;
        printf("bill %d\n",bill);
    }
    return 0;
}