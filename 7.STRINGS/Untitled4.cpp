
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
char x = 'a'-1; 
printf("%c", x); // Display Result = 'b‘
printf("\n%d", x);
printf("\n");

printf("\n%c", ++x); // Display Result = ‘c‘
printf("\n%d", x);
printf("\n");

char x1 = 'c' - 1; 
printf("\n%c", x1); // Display Result = 'b‘
printf("\n%d", x1);
printf("\n");

printf("\n%c", ++x1); // Display Result = ‘c‘
printf("\n%d", x1);



  
getch();
}
