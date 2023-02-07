#include<stdio.h>
int main()
{
	int a[10];
	printf("%d",*a+1-*a+3);
	return 0;
}
// Output: 4
// Here, a is an array which is not initialized. 
// If we use a, then it will point to the first element of the array. 
// Therefore *a will be the first element of the array. Suppose first element of array is x, then the argument inside printf becomes as follows. 
// It’s effective value is 4. x + 1 – x + 3 = 4