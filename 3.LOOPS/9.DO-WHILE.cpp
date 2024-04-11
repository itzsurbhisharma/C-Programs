#include<stdio.h>
#include<conio.h>
int main()
{
int count =5;
   int total=1;
   int num;
//while (count <=4)
do
{
      printf("\nEnter a number: ");	
scanf("%d",&num);	
total = total + num;	
printf( "The total is now  %d ", total);	
count++;
}while(count<=4);
printf("\noutside loop");
getch();
}
