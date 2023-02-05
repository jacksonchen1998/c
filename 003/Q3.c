# include<stdio.h>
# include<stdlib.h>

void fun(int *a)
{
	// a = (int*)malloc(sizeof(int));
    // allocate memory to a

    a = (int*)malloc(sizeof(int));
}

int main()
{
	// int *p = NULL;
	// fun(p);

    int *p = NULL;
    p = (int*)malloc(sizeof(int));
    //fun(p);
	*p = 6;
	printf("%d\n",*p);
    printf("%p\n",p);
    printf("%p\n",&p);
    printf("%p\n",&(*p));
	
	getchar();
	return(0);
}
