#include <stdio.h>
int main()
{
printf("\new_c_question\by");
printf("\rgeeksforgeeks");

getchar();
return 0;
}
// Output: geeksforgeeks 
// Explanation: First printf prints “ew_c_questioy”. 
// Second printf has \r in it so it goes back to start of the line and starts printing characters.
// Now try to print following without using any of the escape characters. 