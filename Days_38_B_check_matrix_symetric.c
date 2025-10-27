//Check if a matrix is symmetric.
#include<stdio.n>
int main(){
    int matrix[10][10];
    int rows,cols;
    printf("enter the rows and cols");
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
            printf("%d",matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {  // check only elements above diagonal
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Print result
    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}




