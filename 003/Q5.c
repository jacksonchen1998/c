#include <stdio.h>
int main()
{
	int first = 50, second = 60, third;
	third = first /* Will this comment work? */ + second;
	printf("%d /* And this? */ \n", third);
	
	getchar();
	return 0;
}
// Output: 110 /* And this? */ 
// Explanation: Compiler removes everything between “/*” and “*/” 
// if they are not present inside double quotes (“”).