//PROGRAM TO SHOW USE OF SWITCH CASE
#include<stdio.h>
#include<conio.h>
int main()
{
    char g;
    printf("enter a character=");
    scanf("%c",&g);
    switch(g)
    {
      case 'a': printf("case is a");
    break;
      case 'b': printf("case is b");
    break;
      case 'e':printf("case is e");
   break;
   default:
   printf("case does not exist");
   break;
      }
      getch();
      }
                       
