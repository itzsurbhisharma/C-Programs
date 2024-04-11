 #include<stdio.h>
#include<conio.h>
#include<string.h>
       main()
       {
              FILE *fp;
              int roll;
              char name[25];
              float marks;
              char ch;

              fp = fopen("file.txt","r");            //Statement   1

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                     
              }

              printf("\nData in file...\n");

              while((fscanf(fp,"%d%s%.2f",&roll,name,&marks))!=EOF)           //Statement   2
                  printf("\n%d\n%s\n%.2f",roll,name,marks);

              fclose(fp);
              getch();
       }
