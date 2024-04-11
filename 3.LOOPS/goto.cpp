#include<stdio.h>
#include<conio.h>
main()
{
 int x;

printf("enter a number:"); 
 scanf("%d",&x);
 if(x%2==0)
 	goto even;
 else
	goto odd;
	
 even:
     { 
         printf("%d is even",x);
     }
   getch();
     return 1;
     
 odd:
   {
       printf("\n%d is odd", x);
}
   printf("\n i m test statement");
getch();
return 0;}
