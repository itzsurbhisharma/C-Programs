#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20] = "Test";
    printf("\nOriginal string is : %s", str);
    printf("\nTest string after string n set" \
           " : %s", strnset(str,'#',3));
    printf("\nAfter string n set : %s", str);
 getch();
}
