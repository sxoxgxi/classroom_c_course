#include <stdio.h>

void largest(int n, int num[]){
    int i, max;
    max = num[0];
    for(i=1;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    printf("\n The largest element of an array: %d", max);
}

int main(){
    int i, n;
    printf("Enter no. of element: ");
    scanf("%d", &n);
    int num[n];
    for (i=0; i<n; i++){
       scanf("%d", &num[i]);
    }
    largest(n, num);
    return 0;
}
