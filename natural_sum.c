// Add N natural numbers using do while loop: Quesion 3

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    do {
        sum += i;
        i++;    
    } while (i <= n);

    printf("The sum of first %d natural numbers is: %d\n", n, sum);
 
    return 0;
}
