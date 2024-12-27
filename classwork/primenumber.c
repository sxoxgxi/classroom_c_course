#include <stdio.h>

int prime(int n){
    int i = 2, c=0;
    while(i<n-1){
        if(n%i==0){
            c++;
            i++;
        }
    }
    return c;
}

int main(){
    int num, i, m;
    printf("Enter a number: ");
    scanf("%d", &num);
    m = prime(num);
    if(m==0){
        printf("%d is a prime number\n", num);
    }else{
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
