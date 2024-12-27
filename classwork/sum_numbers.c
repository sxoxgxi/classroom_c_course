#include <stdio.h>

int addition(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int n1, n2, n3, sum = 0;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    sum = addition(n1, n2, n3);
    printf("Sum = %d", sum);
    return 0;
}
