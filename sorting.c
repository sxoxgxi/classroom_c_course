#include <stdio.h>

int main() {
	int i, n, j, temp;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements: ");
	
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The sorted array in ascending order is: ");
	
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	printf("\nMaximum number is: %d", arr[n - 1]);
	printf("\nMinimum number is: %d", arr[0]);
	printf("\nSecond largest number is: %d", arr[n - 2]);
	printf("\nSecond smallest number is: %d", arr[1]);
	
	return 0;
}
