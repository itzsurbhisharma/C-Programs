 #include<stdio.h>
#include<conio.h>
#include<string.h>
       main()
       {
              FILE *fp;
              int roll=0;
              char name[25];
              float marks=0.00;
              char ch;

              fp = fopen("file.txt","w");            //Statement   1

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                     
              }

              do
              {
                      printf("\nEnter Roll : ");
                      scanf("%d",&roll);

                      printf("\nEnter Name : ");
                      scanf("%s",name);

                      printf("\nEnter Marks : ");
                      scanf("%.2f",&marks);

                      fprintf(fp,"\n%d\n%s\n%.2f",roll,name,marks);

                      printf("\nDo you want to add another data (y/n) : ");
                      ch = getche();

              }while(ch=='y' || ch=='Y');

              printf("\nData written successfully...");

              fclose(fp);
              getch();
       }
