#include <stdio.h>
#include<conio.h>
 
int main ()
{
   /* local variable definition */
   int a = 20;

   /* do loop execution */
   do
   {
       printf("value of a: %d\n", a);
       a = a + 1;
   }while( a < 20 );
 getch();
   return 0;
}
