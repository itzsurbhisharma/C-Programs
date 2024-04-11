#include<stdio.h>
#include<conio.h>
//using namespace std;
struct employee
{
       int emp_code;
       char emp_name[20];
       int dept_code;
       };
       int main()
       {
           void display(employee);
           void read(employee);
           employee emp1;
        //   employee emp1={101,"raj",5};
           //printf("\nenter employee details");
           read(emp1);
           display(emp1);
           getch();
           }
           void read(employee emp1)
           {
                  printf("\nenter employee details");
                scanf("%d%s%d",&emp1.emp_code,&emp1.emp_name,&emp1.dept_code);
                }
           void display(employee emp1)
           {
  printf("\nemployee code:%d",emp1.emp_code);
   printf("\nemployee name:%s",emp1.emp_name);
   printf("\ndept code:%d",emp1.dept_code);
                }
       
