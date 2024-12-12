// Question Number 7: Prime number

#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number\n", num);
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("%d is not a prime number\n", num);
                break;
            }
        }
        if (i == num) {
            printf("%d is a prime number\n", num);
        }
    }
}
