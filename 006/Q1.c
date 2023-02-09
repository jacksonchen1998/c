#include<stdio.h>
int main()
{
    unsigned int i=65000;
    while ( i++ != 0 );
    printf("%d",i);
    return 0;
}
// Output:
// 1
// Explanation:
// It should be noticed that there’s a semi-colon in the body of while loop. 
// So even though, nothing is done as part of while body, the control will come out of while only if while condition isn’t met. 
// In other words, as soon as i inside the condition becomes 0, the condition will become false and while loop would be over. 
// But also notice the post-increment operator in the condition of while. 
// So first i will be compared with 0 and i will be incremented no matter whether condition is met or not. 
// Since i is initialized to 65000, it will keep on incrementing till it reaches highest positive value. 
// After that roll over happens, and the value of i becomes zero. The condition is not met, but i would be incremented i.e. to 1. 
// Then printf will print 1.