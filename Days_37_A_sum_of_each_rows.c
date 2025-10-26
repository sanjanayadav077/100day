//Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main(){
    int matrix[10][10];
    int sumrows[10];
    int i,j;
    int rows,cols;
    printf("enter the rows and columns");
    scanf("%d %d",&rows,&cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("enter the element of the matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        
    }
    for(i=0;i<rows;i++){
        sumrows[i]=0;
        for(j=0;j<cols;j++){
            sumrows[i]=sumrows[i]+matrix[i][j];
        }
    }
    printf("\n sum of each rows\n");
    for(i=0;i<rows;i++){
        printf("rows%d sum=%d\n",i+1,sumrows[i]);
    }
    return 0;
}