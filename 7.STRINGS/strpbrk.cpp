#include <stdio.h>
#include<conio.h>
#include <string.h>

int main ()
{
   const char str1[] = "Stringing";
   const char str2[] = "playng";
   char *ret;

   ret = strpbrk(str1, str2);

   if(ret) 
   {
   
      printf("First matching character: %c\n", *ret);
   }
   else 
   {
      printf("Character not found");
   }
   
   getch();
}
