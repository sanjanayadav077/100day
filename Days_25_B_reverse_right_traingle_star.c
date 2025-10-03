#include<stdio.h>
int main(){
    int n=5;
    for(int i=n;i>=1;i--){
        for(int space=0;space<n-i;space++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}