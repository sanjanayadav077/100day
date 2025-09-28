#include<stdio.h>
int main(){
    int cp,sp,profit,loss;
    printf("enter your selling price");
    scanf("%d",&sp);
    printf("enter your cost price");
    scanf("%d",&cp);
    profit=sp-cp;
    loss=cp-sp;
    int profitpercentage,losspercentage;
    profitpercentage=profit*100/sp;
    losspercentage=loss*100/cp;
    if (sp>cp){
        printf("profit %d\n",profit);
        printf("profitpercentage%d",profitpercentage);
    }
    else{
        printf("loss %d\n",loss);
        printf("losspercentage%d\n",losspercentage);
    }
    return 0;


}