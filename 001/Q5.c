#include <stdio.h>

char *getString()
{
   char *str = "Nice test for strings";
   return str;
}
 
int main()
{
   printf("%s", getString());
   getchar();
   return 0;
}

// Output: “Nice test for strings” 
// The above program works because string constants are stored in Data Section (not in Stack Section). 
// So, when getString returns *str is not lost.
//
//
// This is a simple C program that declares a function getString which returns a pointer to a string literal "Nice test for strings". 
// In the main function, the returned string is passed as an argument to the printf function, which outputs the string to the console. 
// The getchar function is called to wait for the user to press a key before the program terminates.
// It is important to note that the returned pointer str points to a memory location that's reserved for a string literal, 
// which has a static storage duration, and modifying the contents of that memory location results in undefined behavior.
