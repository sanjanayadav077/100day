#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter your side");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<=c || a+c<=b || b+c<=a){
        printf("it's invalid traingle\n");
    }
    else{
        if(a==b && b==c){
            printf("it's a equilateral traingle\n");
        }
        else if(a==b || b==c || a==c){
            printf("it's a Isosceles traingle\n");
        }
        else{
            printf("it's a scalene traingle\n");
        }
    }
    return 0;
}