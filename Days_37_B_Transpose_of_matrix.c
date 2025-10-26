//Find the transpose of a matrix.
#include<stdio.h>
int main(){
    int matrix[10][10];
    int rows,cols;
    int transpose[10][10];
    printf("enter the rows and columns");
    scanf("%d %d",&rows,&cols);
    printf("enter the element:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nmatrix\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    printf("\ntranspose of the matrix\n");
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
