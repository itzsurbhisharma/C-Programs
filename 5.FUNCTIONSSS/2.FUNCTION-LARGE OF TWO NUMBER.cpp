#include<stdio.h> 
#include<conio.h>
main()
{
float a , b , max;
int x,y,maximum;
float large(float x , float y); 
int large(int x,int y);                             /* Function declaration */

printf(" Enter the value of two numbers\n");
scanf("%f%f%d%d" , &a , &b,&x,&y);

printf("a = %f and b = %f\n" , a, b);
max = large(a,b);
maximum=large(x,y);
printf(" The largest number is = %f\n %d" , max,maximum);
getch();

}                                                                   /* End of main() */
   /* Function to determine the largest number */

float large(float x , float y)
{
if(x>y)
{
return(x);
}
else                                                               /* ( y>x )  */
{
return(y);
}
}
int large(int x , int y)
{
if(x>y)
{
return(x);
}
else                                                               /* ( y>x )  */
{
return(y);
}
}
