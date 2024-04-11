#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
    char p1[] = "Raja";
    char *p2="ram";
    p2 = strdup(p1);
 
    printf("Duplicated string is : %s", p2);
    getch();
}
