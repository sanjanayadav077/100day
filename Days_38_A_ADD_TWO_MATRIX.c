//add two matrix
#include<stdio.h>
int main(){
    int matrix[10][10];
    int rows,cols;
    int matrix1[10][10];
    int sum[10][10];
    printf("enter the rows and columns for the first matix");
    scanf("%d %d",&rows,&cols);
    printf("enter the rows and cols for the second matrix");
    scanf("%d %d",&rows,&cols);
    printf("enter the element for the first matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nmatrix1\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("enter the element or the second matrix");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nmatrix2\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum[i][j]=matrix[i][j]+matrix1[i][j];
        }
    }
    printf("\nsum\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}