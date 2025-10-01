#include<stdio.h>
int main(){
    int n,product=1,r;
    printf("enter number");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        n=n/10;
        if(r%2!=0){
            product=product*r;
            r++;
            

        }
        
    }
    printf("product of odd number%d\n",product);
    return 0;

    
}