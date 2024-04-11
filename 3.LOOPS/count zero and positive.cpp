//----------------Header Files-----------//
#include<stdio.h>
#include<conio.h>
main() //------main function-----//
{
//------Variable Declaration--------//
int a,i,n,pos=0,neg=0,zero=0;
//---Input N Value using printf() and scanf() function---//
printf("Enter the value of N which is less then 100:");
scanf("%d",&n);
//---Input N Elements----//
for(i=0;i<n;i++)
{
printf("Enter the %d Element:",i+1);
scanf("%d",&a);

//---Count Total Positive, Negative and Zero Operation----//
if(a>0)
pos++;
if(a<0)
neg++;
if(a==0)
zero++;
}
//------------Dispaly Result--------------//
printf("\nPositive:%d \nNegative:%d \nZero:%d",pos,neg,zero);
getch();//---Function for Hold Output Screen--//
}
//----------------End-----------------//
