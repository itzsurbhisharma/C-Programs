#include<stdio.h>
#include<conio.h>
void main()
{
    int key;
   printf(“Press 1 to turn left”);
   printf(“Press 2 to turn right”);
   printf(“Press 3 to increase speed”);
   printf(“Press 4 for break”);
   scanf(“%d”, &key);
   switch(key)
   {
     case 1:
       printf(“\nTurn left”);
     break;
     case 2:
       printf(“\nTurn right”);
     break;
     case 3:
       printf(“\nIncrease speed”);
     break;
     case 4:
      printf(“\nBreak”);
     break;
     default:
       printf(“Invalid input”);
       }
    getch();
}
