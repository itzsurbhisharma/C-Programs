#include<stdio.h>
#include<conio.h>
 int main()
{
     char a1[] = "Hello";
     char *b1;
     
     char f1[20];
     b1=a1;
     //f1=a1;
     
     puts(a1);
     puts(b1);
     b1--;
    puts(b1);
    printf("\n");
     char a2[100]= "World";
     char *b2;
     printf("\n");
     b2=a2;
    
     puts(b2);
     puts(a2);
     
     b2++;
     puts(b2);
     //a2++;
     //puts(a2);
     printf("%c\n",a2[0]);
     printf("%c",b2[1]);
     printf("\n");
     
     a1[0]='1';
     puts(a1);
     printf("\n");
     b1[1]='1';
     puts(a1);
     puts(b1);
     printf("\n");
     
     *(b2+2)='#';
     puts(b2);
     puts(a2);
     printf("\n");
     
     *(a1+2)='4';
     puts(a1);
     puts(b1);
     
     
     getch();
 }
