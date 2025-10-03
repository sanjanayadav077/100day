#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=(n+1)-i;j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}