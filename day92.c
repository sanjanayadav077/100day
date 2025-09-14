#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("%d grade A\n",marks);
    }
    else if(marks>=80 && marks<=89){
        printf("%d grade B\n",marks);
    }
    else if(marks>=70 && marks<=79){
        printf("%d Grade C\n",marks);
    }
    else if(marks>=60 && marks<=69){
        printf("%d grade D\n",marks);
    }
    else{
        printf("%d fail\n",marks);
    }
    return 0;
}