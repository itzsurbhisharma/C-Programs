#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
{
     int c[]={1,2,3,4,5};
printf("%d",(c==&c[0]));
printf("\nThe value at c is %d",c);
printf("\nThe string at &c %d",&c[0]);
printf("\nThe string at c0 %d",c[0]);
char a[100];
printf("\nThe string is: ");
scanf("%s",a);
printf("\nThe string is %s",a);
printf("\nThe string is %s",&a);
printf("\nThe string is %p",a);
printf("\nThe string is %p",&a);
printf("\nThe string is %c",a[0]);
//printf("\nThe string is %s",a[0]);

getch();
}
