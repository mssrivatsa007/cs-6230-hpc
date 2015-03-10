#include <stdio.h>

int sum3(int *arr, int n)
{
	if(n == 1)
		return arr[0];
	if(n % 2 == 0)
		return sum3(arr, n/2) + sum3(arr + n/2, n/2);
	else
		return sum3(arr, n/2) + sum3(arr + n/2, n/2 + 1);
}

int main() {
	// your code goes here
	int arr[] = {1,2,3,4,5,6,7}; 
	int n = 6;
	printf("%d",sum3(arr, n));
	return 0;
}
