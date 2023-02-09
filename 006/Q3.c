#include<stdio.h>
int main()
{
	float f=5,g=10;
	enum{i=10,j=20,k=50};
	printf("%d\n",++k); // lvalue required as increment operand
	printf("%f\n",f<<2);
	printf("%lf\n",f%g);
	printf("%lf\n",fmod(f,g));
	return 0;
}
// Output:
// Program will not compile and give 3 errors
// Explanation:
// Here, i, j and k are inside the enum and therefore, they are like constants. 
// In other words, if want to use 10 anywhere in the program, we can use i instead. 
// In the first printf, the value of k is being modified which is not allowed because it’s enum constant. 
// In the second printf, left-shift operator is being applied on a float which is also not allowed. 
// Similarly, in the third printf, modulus operator is being applied on float f and g which is also not allowed.