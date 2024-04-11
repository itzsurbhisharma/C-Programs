/* C program to check whether a number is palindrome or not */
#include<conio.h>
#include <stdio.h>
int main()
{
  int n, reverse=0, rem,temp;
  printf("Enter an integer: ");
  scanf("%d", &n);
  temp=n;
  while(temp!=0)
  {
     rem=temp%10;
     printf("%d\n",rem);
     reverse=reverse*10+rem;
     printf("%d\n",reverse);
     temp/=10;
     printf("%d\n",temp);
  }  
/* Checking if number entered by user and it's reverse number is equal. */  
  if(reverse==n)  
      printf("%d is a palindrome.",n);
  else
      printf("%d is not a palindrome.",n);
  getch();
  return 0;
}
