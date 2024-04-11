#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
{
     char a[100];
     printf("Enter String\n");
     gets(a);
     printf("\n");
     char *b;
     b=a;
      printf("String in b\n");
     puts(b);
     printf("\n");
     char c[100];
     for(int i=0; i<=strlen(a);i++)
     {
     c[i]=a[i];
     }
     printf("String in c\n");
     puts(c);
     printf("\n");
     char *d;
     d=b;
     printf("String in d\n");
     puts(d);
     printf("\n");
     char e[100];
     e=b;
     printf("String in e\n");
     puts(d);
     
     getch();
 }
