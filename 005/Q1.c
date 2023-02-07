#include<stdio.h>
int main()
{
	while(1){
		if(printf("%d",printf("%d")))
			break;
		else
			continue;
	}
	return 0;
}
// The reason why the condition of if will be met is printf function. 
// Function printf always returns the no. of bytes it has output.