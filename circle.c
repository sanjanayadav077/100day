#include<stdio.h>
int main(){
    float radius,area,perimeter;
    const float pi=3.14;
    printf("enter radius");
    scanf("%f",&radius);
    
    area=pi*radius*radius;
    perimeter=2*pi*radius;
    printf("area of circle=%.2f\n",area);
    printf("perimeter of circle=%.2f\n",perimeter);
    return 0;
}