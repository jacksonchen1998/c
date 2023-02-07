#include<stdio.h>
int main()
{
	int x,y=2,z,a;
	if ( x = y%2)
		z =2;
	a=2;
	printf("%d %d ",z,x);
	return 0;
}
// Output: 
// < some garbage value of z > 0
// Explanation: 
// This question has some stuff for operator precedence. 
// If the condition of if is met, then z will be initialized to 2 otherwise z will contain garbage value. 
// But the condition of if has two operators: assignment operator and modulus operator. 
// The precedence of modulus is higher than assignment. So y%2 is zero and it’ll be assigned to x. 
// So the value of x becomes zero which is also the effective condition for if. And therefore, condition of if is false. 