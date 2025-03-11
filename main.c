#include <stdio.h>

int main() {
    printf("Enter number of rows of matrix:\n");
    int rows;
    scanf("%d", &rows);

    printf("Enter number of columns of matrix:\n");
    int cols;
    scanf("%d", &cols);

    printf("Enter for matrix 1: ");
    int a[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Enter element at position [%d][%d]:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Now enter for matrix 2: ");
    int b[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Enter element at position [%d][%d]:\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("The addition of Matrices is:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    printf("finding saddle point of matrix: ");
    for(int i = 0; i < rows; i++){
        int saddleNum = a[i][j];
        for(int j = 0; j < cols; j++){
            if(j < cols - 1){
                if(a[i][j+1] > saddleNum){
                    saddleNum = a[i][j+1];
                }
            }
        }
        for(int k = 0; k < rows; k++){
            if(k < rows - 1){
                
            }
            
        }
    }

    return 0;
}
