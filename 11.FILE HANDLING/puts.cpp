#include<stdio.h>
#include<conio.h>
#include<string.h>
       main()
       {
              FILE *fp;
              char str[50];

              fp = fopen("file.txt","w");            //Statement   1

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                    
              }

              do
              {
                     gets(str);
                     fputs(str,fp);

              }while(strlen(str)!=0);


              printf("\nData written successfully...");

              fclose(fp);
              getch();
       }
