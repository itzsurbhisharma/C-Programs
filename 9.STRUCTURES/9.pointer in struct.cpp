//Program to show working of pointer to structure
#include<stdio.h>
#include<conio.h>
//namespace std()
struct date
{
       int day;
       int month;
     int year;
       }obj;
       main()
       {
                 //date obj={2,11,2016};
             date *p;
             
             p=&obj;
             scanf("%d\n%d\n%d",&(p->day),&(p->month),&(p->year));
             printf("%d\n%d\n%d",p->day,p->month,p->year);
             //printf("%d",p->date);
             getch();
             }
             
