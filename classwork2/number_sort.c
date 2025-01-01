#include <stdio.h>


void sort(int num[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}

int main(){
    int i, n;
    printf("enter n numbers:");
    scanf("%d", &n);
    int num[n];
    printf("enter %d numbers: ", n);

    for (i = 0; i<n; i++){
        scanf("\t%d", &num[i]);
    }

    sort(num, n);
    printf("\nthe numbers in ascending order: \n");
    for(i=0; i<n; i++){
        printf("%d\t", num[i]);
    }

    return 0;
}
