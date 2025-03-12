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
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Now enter for matrix 2: ");
    int b[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]:\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("The addition of Matrices is:\n");
    int sum[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    int saddle = 0;
    int saddleFound = 0;
    int col;
    int row;
    for(int i = 0; i < rows; i++){
        saddle = a[i][0];
        row = i;
        col = 0;
        for(int j = 0; j < cols - 1; j++){
            if(saddle > a[i][j + 1]){
                saddle = a[i][j+1];
                col = j+1;
            }
            else{
                continue;
            }
        }
        int checkBreak = 0;
        for(int k = 0; k < rows; k++){
            if(saddle < a[k][col]){
                checkBreak = 1;
                break;
            }
        }
        if(!checkBreak){
            saddleFound = 1;
        }
        if(saddleFound){
            break;
        }
    }
    
    if(!saddleFound){
            printf("no saddle");
        }
        else{
            printf("saddle is %d found at (%d,%d) \n", saddle, row,col);
        }
        
	saddle = 0;
	saddleFound = 0;
    for(int i = 0; i < rows; i++){
        saddle = b[i][0];
        row = i;
        col = 0;
        for(int j = 0; j < cols - 1; j++){
            if(saddle > b[i][j + 1]){
                saddle = b[i][j+1];
                col = j+1;
            }
            else{
                continue;
            }
        }
        int checkBreak = 0;
        for(int k = 0; k < rows; k++){
            if(saddle < b[k][col]){
                checkBreak = 1;
                break;
            }
        }
        if(!checkBreak){
            saddleFound = 1;
        }
        if(saddleFound){
            break;
        }
    }
    
    if(!saddleFound){
            printf("no saddle");
        }
        else{
            printf("saddle is %d found at (%d,%d)\n", saddle, row,col);
        }
        //multiply matrix
        printf("Matrix 1 X Matrix 2 is \n");
        for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			int mult = 0;
			for(int k = 0; k < rows; k++){
				mult = mult + a[i][k]*b[k][j];
			}
			printf("%d ", mult);
		}
		printf("\n");
        }
    return 0;
}
