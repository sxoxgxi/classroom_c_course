// Question 4: Sum of digits using while loop

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter an integer number: ");
    scanf("%d", &num);


    while (num != 0) {
        remainder = num % 10;
        sum += remainder;   
        num = num / 10;    
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
