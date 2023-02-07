#include <stdio.h>
int main()
{
	unsigned int i=10;
	while(i-- >= 0)
		printf("%u ",i);
	return 0;
}
// Output: 
// 9 8 7 6 5 4 3 2 1 0 4294967295 4294967294 …… 
// (on a machine where int is 4 bytes long)