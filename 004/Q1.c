# include <stdio.h>
int main()
{
	struct site
	{
		char name[] = "GeeksforGeeks";
		int no_of_pages = 200;
	};
	struct site *ptr;
	printf("%d",ptr->no_of_pages);
	printf("%s",ptr->name);
	getchar();
	return 0;
}


// Output: 
// Compiler error
// Explanation: 
// Note the difference between structure/union declaration and variable declaration. 
// When you declare a structure, you actually declare a new data type suitable for your purpose. 
// So you cannot initialize values as it is not a variable declaration but a data type declaration.