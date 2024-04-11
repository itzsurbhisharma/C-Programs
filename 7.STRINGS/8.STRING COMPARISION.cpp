//STRING COMPARISION FUNCTION
#include <stdio.h>
#include <string.h>
#include<conio.h> 
 main()
{
       int g;
   char a[100], b[100];
 
   printf("Enter the first string=");
   gets(a);
 printf("\nEnter the second string=");
   gets(b);
   g=strcmp(a,b);
   printf("\n%d",g);
 if( g == 0 )
 {
      printf("\nEntered strings are equal.\n");
      }
else if(g < 0)
{
 printf("\nFirst Strings is less than Second String.\n");
}
  else
  {
  printf("\nFirst Strings is greater than Second String.\n");
}
    
 
 getch();
   
}
