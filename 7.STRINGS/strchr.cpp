#include <stdio.h>
#include<conio.h>
#include <string.h>
int main ()
{
  char string[55] ="Stringing";
  char *p;
  char *q;
  p = strstr (string,"ng");
  q = strrchr (string,'i');
 
  printf ("Character i is found at position %d\n",p-string+1);
  printf ("Character i is found at position %d\n",q-string+1);
 
   getch();
}
