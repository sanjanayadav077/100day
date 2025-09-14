#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter your input");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d a is greater\n",a);
    }
    else if(b>a && b>c){
        printf("%d b is greater\n",b);
    }
    else{
        printf("%d c is greater\n",c);
    }
    return 0;
}