#include <stdio.h>

int main()
{
	char a[2][3][3] = {'g','e','e','k','s','f','o',
						'r','g','e','e','k','s'};
	printf("%s ", **a);
	getchar();
	return 0;
}
// Output: 
// geeksforgeeks
// Explanation: We have created a 3D array that should have 2*3*3 (= 18) elements, 
// but we are initializing only 13 of them. 
// In C when we initialize less no of elements in an array all uninitialized elements become ‘\0’ in case of char and 0 in case of integers. 