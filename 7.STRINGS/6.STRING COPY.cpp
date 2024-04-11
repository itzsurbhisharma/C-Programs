
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s1[10],s2[10];
printf("enter string=");
gets(s1);
gets(s2);
strcpy(s2,s1);
printf("\nfirst string= %s",s1);
printf("\nsecond string=%s",s2);
getch();
}
