#include<stdio.h>
#include<conio.h> 
int main() {
   int i, arr[50], sum, num;
 
   printf("\nEnter no of elements :");
   scanf("%d", &num);
 
   //Reading values into Array
   printf("\nEnter the values :");
   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);
 
   //Computation of total
   sum = 0;
   for (i = 0; i < num; i++)
      sum = sum + arr[i];
 
   //Printing of all elements of array
   for (i = 0; i < num; i++)
      printf("\na[%d]=%d", i, arr[i]);
 
   //Printing of total
   printf("\nSum=%d", sum);
 getch();
   return (0);
}
