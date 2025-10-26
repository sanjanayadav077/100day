//Read and print a matrix.
#include<stdio.h>
int main(){
    int matrix[10][10];
    int rows,cols;
    int i,j;
    printf("enter the number of rows and columns");
    scanf("%d %d",&rows,&cols);
    printf("enter the element of the matrix");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
    }
    //print matrix
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}