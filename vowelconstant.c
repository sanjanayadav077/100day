#include<stdio.h>
int main(){
    char ch;
    printf("enter your character");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("%c It's vowel",ch);
    }
    else{
        printf("%c it's constant",ch);
    }
    return 0;
}