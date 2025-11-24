#include<stdio.h>
int main(){
    int length=15;
    int breadth=20;
    int area;
    int perimeter;
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("area=%d\n",area);
    printf("perimeter=%d\n",perimeter);
    return 0;
}