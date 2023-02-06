#include <stdio.h>
int fun(int n)
{
	int i, j, sum = 0;
	for(i = 1;i<=n;i++)
		for(j=i;j<=i;j++)
			sum=sum+j;
	return(sum);
}

int main()
{
	printf("%d", fun(15));
	getchar();
	return 0;
}
// Output: 120 
// Explanation: fun(n) calculates sum of first n integers or we can say it returns n(n+1)/2.