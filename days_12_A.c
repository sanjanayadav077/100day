#include<stdio.h>
int main(){
    int latedays;
    int fine=0;
    printf("enter days late");
    scanf("%d",&latedays);
    if(latedays==0){
        printf("No fine\n");
    }
    else if(latedays<=5){
        fine=latedays*2;
        printf("fine %d\n",fine);
    }
    else if(latedays<=10){
        fine=5*2+(latedays-5)*4;
        printf("fine %d\n",fine);
    }
    else if(latedays<=30){
        fine=5*2+5*4+(latedays-10)*6;
        printf("%d fine\n",fine);
    }
    else{
        printf("membership canvelled");
    }
    return 0;

}
    