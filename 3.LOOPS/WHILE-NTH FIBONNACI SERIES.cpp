//PROGRAM TO PRINT FIBONACCI NUlMBER
#include<conio.h>
#include<stdio.h>
int main()
{
int a=0,b=1,n,count=1;
int c=0;
printf("\n Enter number N : ");
scanf("%d",&n);
if(n==1)
printf("0");
if(n==2)
printf("1");
printf("\n%d",a);
printf("\n%d",b);
while(count<=n)
{//printf("\n%d%d",a,b);
               c=a+b;
               a=b;
               b=c;
               count++;
               
               printf("\n%d",c);
               }
               if(c!=0)
               printf("\n%dth number is %d ",n,c);
               getch();
               }
