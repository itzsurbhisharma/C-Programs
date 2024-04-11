/* Fibonacci Series c language */
#include<stdio.h>
#include<conio.h>
 
int main()
{
   int n, a = 0, b = 1, c, i;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
   printf("\n%d",a);
   printf("\n%d",b);
 
   for ( i = 0 ; i < n ; i++ )
   {
 
         c = a + b;
         a = b;
         b = c;
      
      printf("\n%d",c);
   }
 getch();
   return 0;
}
