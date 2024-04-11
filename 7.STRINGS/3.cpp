# include<stdio.h>
# include<conio.h>
# include<string.h>
 int main()
{
int g;
char a[100], b[100];
gets(a);
gets(b);
printf("%s",strchr(a,'I'));
printf("\n%s",strrchr(a,'i'));
printf("\n%s",strstr(a,b));
getch();

      }
