#include<stdio.h>
#include<conio.h>
       struct Student
       {
              int roll;
              char name[25];
              float marks;
       };

       main()
       {
              FILE *fp;
              char ch;
              struct Student Stu;

              fp = fopen("Student.dat","r");            

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
              }

              printf("\nRoll\tName\tMarks\n");

              while(fread(&Stu,sizeof(Stu),1,fp)>0)
                  printf("\n%d\t%s\t%f",Stu.roll,Stu.name,Stu.marks);

              fclose(fp);
              getch();
       }
