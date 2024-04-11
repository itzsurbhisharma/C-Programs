//TO FIND FACTORIAL OF NUMBER USING FOR LOOP
#include <stdio.h>
#include<conio.h>
int main()
{
    int n, i;
    int fact = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    
        for(i=1; i<=n; ++i)
        {
            fact *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %d", n, fact);
    
getch();
    return 0;
}
