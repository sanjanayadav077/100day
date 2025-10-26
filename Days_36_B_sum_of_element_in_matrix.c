//Find the sum of all elements in a matrix.
#include<stdio.h>
int main(){
    int matrix[10][10];
    int rows,cols;
    int i,j;
    printf("enter the rows and columns");
    scanf("%d %d",&rows,&cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
            printf("\n");
        }
    }
    int sum=0;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum=sum+matrix[i][j];
        }
    }
    printf("sum of the element in matrix%d",sum);
    return 0;
}