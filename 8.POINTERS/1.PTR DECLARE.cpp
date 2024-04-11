//DECLARING A POINTER
#include<conio.h>
#include<stdio.h>
main()
{
int i=5, *ptr;
ptr=&i;//STORE THE ADDRESS OF I into PTR
printf("%d",ptr);
printf("\n");
printf("%d",*ptr);//DE-REFERENCING OF POINTER VARIABLE
printf("\n%d",i);
printf("\n%d",&ptr);
printf("\n%d",&i);


getch();
}
