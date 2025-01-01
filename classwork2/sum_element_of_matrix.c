#include <stdio.h>

int main(){
    int a[5][5], m, n, i, j, sum=0;
    printf("Enter row and column of a matrix");
    scanf("%d%d", &m, &n);
    printf("enter the element of first matrix: ");
    for(i=0;i<m; i++) {
        for(j=0,j<n;j++){
            printf("enter a[%d][%d]; \t", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<m;i++){
        for(j=0;j<n;j++){
           sum=sum+a[i][j]; 
        }
    }
    printf("sum of al the element of matrix is %d", sum);
    return 0;
}
