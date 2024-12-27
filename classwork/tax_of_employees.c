#include <stdio.h>

float cal_tax(float b) {
    float tax;
    if (b<9000) {
        tax = b * 0.2;
    } else {
        tax = b * 0.25;
    }
    return tax;
};

int main() {
    int i, n;
    float basic, tax;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Enter the basic salary of employee %d: ", i);
        scanf("%f", &basic);
        tax = cal_tax(basic);
        printf("Tax of employee %d is: %.2f\n", i, tax);
    }
    return 0;
}

