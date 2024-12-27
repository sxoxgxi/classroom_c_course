#include <stdio.h>

int hcf(int a, int b){
    int c;
    while(b!=0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}


int main(){
    int i, x, y, HCF, LCM;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    HCF = hcf(x, y);
    LCM = (x*y)/HCF;
    printf("HCF of %d and %d is %d\n", x, y, HCF);
    printf("LCM of %d and %d is %d\n", x, y, LCM);
    return 0;
}

