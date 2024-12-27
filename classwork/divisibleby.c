#include <stdio.h>

void divide(int A, int B){
    int i;
    for (i = A; i <= B; i++){
        if (i % 3 == 0){
            printf("%d\n", i);
        }
    }
}

int main(){
    int N1, N2;
    printf("Enter the range A and B: ");
    scanf("%d %d", &N1, &N2);
    divide(N1, N2);
    return 0;
}
