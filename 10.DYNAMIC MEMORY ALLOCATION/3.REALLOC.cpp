#include <stdio.h>
#include <stdlib.h> /*required for dynamic memory*/
#include<conio.h>
int main()
{    //  clrscr();
 int number, *ptr, i;
 printf("How many ints would you like store?");
 scanf("%d", &number);
 ptr = (int *)malloc(number*sizeof(int)); /*allocate memory*/
 for(i=0 ; i<number ; i++) {
scanf("%d",&(*(ptr+i)));
 }
 printf("\n");
 for(i=0 ; i<number ; i++){
   printf("%d\n", *(ptr+i));
 }
 printf("\nenter other two numbers");
 number=number+2;
 ptr = (int *)realloc(ptr,number*sizeof(int));

 for(i=0 ; i<number ; i++) {
scanf("%d",&(*(ptr+i)));
 }
 printf("\n");
 for(i=0 ; i<number ; i++){
   printf("%d\n", *(ptr+i));
 }
  printf("\n");
 free(ptr);
  
 for(i=0 ; i<number ; i++)
   printf("%d\n", *(ptr+i));
   printf("\n");
   free(ptr);
    for(i=0 ; i<number ; i++)
   printf("%d\n", *(ptr+i));
   
 
 getch();
 return 0; 
} 
