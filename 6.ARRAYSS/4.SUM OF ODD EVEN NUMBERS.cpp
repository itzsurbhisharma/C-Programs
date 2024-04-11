#include<stdio.h>
#include<conio.h>
main()
{
int arr[10],a=0,s=0,i;
for(i=0;i<4;i++)
{
printf("enter no");
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++)
{
if(arr[i]%2==0)
{
               printf("\nThe even number");
               printf("\n%d",arr[i]);
a=a+arr[i];
}
else
{
s=s+arr[i];
}
}
printf("sum of even numbers is%d\n",a);
printf("sum of odd numbers is%d\n",s);
getch();
}
