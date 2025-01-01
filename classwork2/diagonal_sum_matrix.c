#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[5][5];
    int row, col, sum=0;
    printf("Enter rows and columsn of square matrix\n");
    scanf("%d%d", &row, &col);
    printf("Enter the elements of the matrxi\n");
    for(int i=0; i<row; i++){
        for(int j= 0; j<col;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The matrix\n");
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d", mat[i][j]);
        }

        printf("\n");
    }
    for (int i=0;i<row;i++) {
        for(int j=0;j<col;j++){
            if(i==j){
                sum=sum+mat[i][j];
            }
        }
    }
    printf("The sum of dragnonal elements is %d\n", sum);
    return 0;
}
