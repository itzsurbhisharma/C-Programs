#include<stdio.h>
#include<conio.h>
main()
{
      int i,j;
      int a[3][3];int *p;
      printf("\nEnter array elements :\n");
      for(i=0;i<3;i++)
      for(j=0;j<4;j++)
      scanf("%d",*(*(a+i)+j));
      printf("\nElements of Matrix A:\n\n");//DISPLAY THE ELEMENTS IN MATRIX FORM
for (i=0; i<3; i++)
{
for (j=0; j<4; j++)
printf("\t%d", a[i][j]);
printf("\n\n");
}
      }
