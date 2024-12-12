// Question number 13: HCF and LCM

#include <stdio.h>

int main() {
    int num1, num2, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (hcf = num1; hcf >= 1; hcf--) {
        if (num1 % hcf == 0 && num2 % hcf == 0) {
            break;
        }
    }

    lcm = (num1 * num2) / hcf;

    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);
    
    return 0;
}

