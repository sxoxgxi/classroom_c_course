#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int naturalSum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + naturalSum(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += fibonacci(i);
    }
    printf("Sum of the first %d terms: %d\n", n, sum);

    printf("Factorial of %d: %d\n", n, factorial(n));

    printf("Sum of the first %d natural numbers: %d\n", n, naturalSum(n));
    
    return 0;
}
