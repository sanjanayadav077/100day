#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=1;j<=2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}