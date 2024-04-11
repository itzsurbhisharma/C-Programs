//The following example shows the usage of strspn() function.

#include <stdio.h>
#include<conio.h>
#include <string.h>

int main ()
{
   int len;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "BACDG0";

   len = strspn(str1, str2);

   printf("Length of initial segment matching:\n%d", len );
   
   getch();
}
