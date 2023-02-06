#include <stdio.h>
int main()
{
	int c = 5, no = 1000;

    // correct way
	// while (c--)
    // {
    //     if (c == 0)
    //         break;
    //     no /= c;
    // }

    do {
        no /= c;
    } while(c--); // bug: this will execute for c = 0 also

	printf ("%d\n", no);
	return 0;
}
// Output: Exception – Divide by zero
// Explanation: There is a bug in the above program. 
// It goes inside the do-while loop for c = 0 also. 