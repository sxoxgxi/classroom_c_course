#include <stdio.h>

int fib(int x){
    if (x==0||x==1){
        return 1;
    } else {
        return (fib(x-1)+fib(x-2));
    }
}

int main(){
    int i, a=0, b=1, n, sum;
    printf("enter no of terms: ");
    scanf("%d", &n);
    sum= a+b;
    for (i=1; i<n;i++){
        sum+=fib(i);
    }
    printf("the sum of fibonacci series: %d\n", sum);
    return 0;
}
