//ILLUSTRATE the STRUCTURE
#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int rollno;
float marks;
};//s1;
student s1,s2;
main()
{

//struct student s1;
printf("Enter student1 Name, Rollno, Marks:\n");
scanf("%s%i%f", &s1.name, &s1.rollno, &s1.marks);
printf("\nStudent Name\tRollno\tMarks\n");
printf("%s\t%i\t%f", s1.name, s1.rollno, s1.marks);
printf("\n");

getch();
}
