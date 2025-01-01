// read two matrices and multiply them if possible

#include <stdio.h>

int main(){
    int m, n, p, q;
    int a[4][4], b[4][4], c[4][4], i, j, k;
    printf("Enter elements of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter elements of second matrix\n");
    scanf("%d%d", &p, &q);
    if(n!=p){
        printf("Multiplication not possible");
    } else {
        printf("Enter elements of first matrix\n");
        for(i=0;i<m;i++){
            
            for(j=0;j<n;j++){
                printf("Enter a[%d][%d]; \t", i, j);
                scanf("%d", &a[i][j]);
            }
        }
    }
    printf("enter the second matrix\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("Enter b[%d][%d]; \t", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("The resultant matrix is\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d\t", c[i][j]);
        }
}
}
