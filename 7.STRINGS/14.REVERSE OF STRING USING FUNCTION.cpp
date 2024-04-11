//PROGRAM TO CONVERT STRING IN LOWER CASE
#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
{
char a[15];
char b[20];
printf("enter string =");
gets(a);
strrev(a);
printf("String in reverse order  is= ",a);
puts(a);
getch();
}
