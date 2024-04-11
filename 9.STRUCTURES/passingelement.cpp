#include<stdio.h>
#include<conio.h>
//using namespace std;
struct employee
{
       int code;
       char name[20];
       int dept;
       };
       int main()
       {
           void display(int, char [], int);
           employee emp={101,"raj",5};
           printf("\nemployee details");
           display(emp.code,emp.name,emp.dept);
           getch();
           }
           void display(int c,char n[],int d)
           {
  printf("\nemployee code:\t%d",c);
   printf("\nemployee name:\t%s",n);
   printf("\ndept code:\t%d",d);
                }
       
