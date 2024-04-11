#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char str[20] = "Test String";
   printf("\nOriginal string is : %s", str);
   printf("\nTest string after strset() : %s",strset(str,'0'));
   printf("\nAfter string set: %s",str);
   getch();
}
