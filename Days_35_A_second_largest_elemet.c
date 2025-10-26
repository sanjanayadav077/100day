//Find the second largest element in an array.
#include<stdio.h>
#include<limits.h>
int main(){
int size;
printf("enter the size of the elemet");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);

}
int max=INT_MIN;
int smax=INT_MIN;
for(int i=0;i<size;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
for(int i=0;i<size;i++){
    if(smax<arr[i] && arr[i]!=max){
        smax=arr[i];
    }
}
printf("smax%d",smax);
return 0;

}