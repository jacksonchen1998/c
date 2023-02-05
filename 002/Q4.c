#include<stdio.h>
int main()
{
    int x;
    printf("%d",scanf("%d",&x));
    /* Suppose that input value given
        for above scanf is 20 */
    return 1;
}

// scanf returns the no. of inputs it has successfully read.
// In the above program, scanf reads 1 input successfully, so it returns 1.
// If scanf fails to read any input, it returns 0.