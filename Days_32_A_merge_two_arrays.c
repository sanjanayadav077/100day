#include<stdio.h>
int main(){
    int n;
    printf("enter the size of first arrays");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("first array\n");
    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
    int m;
    printf("enter the size of second arrays\n");
    scanf("%d",&m);
    int arr2[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    printf("second arrays");
    for(int i=0;i<m;i++){
        printf("%d",arr2[i]);
    }
    //declared merged arrays
    int merged[n+m];
    for(int i=0;i<n;i++){
        merged[i]=arr1[i];
    }
    for(int i=0;i<m;i++){
        merged[n+i]=arr2[i];
    }
    printf("merged arryas.\n");
    for(int i=0;i<n+m;i++){
        printf("%d",merged[i]);
    }
    return 0;
}
