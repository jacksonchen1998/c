// #include <stdio.h>
// int main()
// {
// 	int i;
// 	i = 1, 2, 3;		
// 	printf("i = %d\n", i);

// 	getchar();
// 	return 0;
// }

// Output: 1 
// The above program prints 1. Associativity of comma operator is from left to right, 
// but = operator has higher precedence than comma operator. 
// Therefore the statement i = 1, 2, 3 is treated as (i = 1), 2, 3 by the compiler.

#include <stdio.h>
int main()
{
	int i;
	i = (1, 2, 3, 5);		
	printf("i = %d\n", i);

	getchar();
	return 0;
}
