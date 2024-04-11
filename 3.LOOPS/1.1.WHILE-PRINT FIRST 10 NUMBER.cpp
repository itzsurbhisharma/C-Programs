//print first 10 natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
 int i=1;
 int n;
 printf("enter the value of n");
 scanf("%d",&n);
 while (i<=n)
 {
  printf("\n%d", i);
  //n=n+1;//n++;
  i++;
 }
 getch();
}
