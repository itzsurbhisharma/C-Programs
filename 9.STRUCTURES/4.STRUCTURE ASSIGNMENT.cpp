#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int rollno;
float marks;
}s2,s3;
main()
{
struct student s1 = {"abc", 1, 450};
printf("\nName\tRollno\tMarks\n");
printf("%s\t%i\t%f", s1.name, s1.rollno, s1.marks);
s2=s1;
printf("\nName\tRollno\tMarks\n");
printf("%s\t%i\t%f", s2.name, s2.rollno, s2.marks);
for(int i=0;i<20;i++)
{
s3.name[i]=s2.name[i];
}
s3.rollno=s2.rollno;
s3.marks=s2.marks;
printf("\n");
printf("\nName\tRollno\tMarks\n");
printf("%s\t%i\t%f", s3.name, s3.rollno, s3.marks);
getch();
}
