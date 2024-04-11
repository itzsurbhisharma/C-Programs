//PROGRAM TO CHECK WHETHER A NUMBER IS AMSTRONG NUMBER OR NOT
#include <stdio.h>
#include<conio.h>
int main()
{
  int n, n1, rem, num=0;
  printf("Enter a positive  integer: ");
  scanf("%d", &n);
  n1=n;
  while(n1!=0)
  {
      rem=n1%10;
     // printf("\n%d",rem);
      num+=rem*rem*rem;
      printf("\n%d",num);
      
      n1/=10;
      //printf("\n%d",n1);
  }
  if(num==n)
    printf("\n%d is an Armstrong number.",n);
  else
    printf("%\nd is not an Armstrong number.",n);
getch();

}
