#include <stdio.h>
// correct the following macro definition
#define prod(a,b) a*b
int main()
{
	int x=3,y=4;
	printf("%d",prod(x+2,y-1));
	return 0;
}
// Output: 10
// Explanation:
// prod(a, b) = a*b 
// prod(x+2, y-1) = x+2*y-1 = 3+2*4-1 = 3+8-1=10
// This type of mistake in macro definition is called – macro side-effects.