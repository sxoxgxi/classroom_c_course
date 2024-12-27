#include <stdio.h>

int fibonacci(int x, int y){
    return(x+y);
}

int main(){
   int i, n, a=0, b=1, c, sum=0;
    c=a+b;
   sum=c;
   printf("enter no of terms: ");
   scanf("%d", &n);
   for(i=2; i<n;i++){
      sum +=c;
      a=b;
      b=c;
      c= fibonacci(a, b);
   }
   printf("the sum of fibonacci series %d\n", sum);
   return 0;
}
