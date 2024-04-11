 #include<stdio.h>
#include<conio.h>
       main()
       {
              FILE *fp;
              char ch;

              fp = fopen("file.txt","r");            //Statement   1

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                     
              }

              printf("\nData in file...\n");

              while((ch = fgetc(fp))!=EOF)           //Statement   2
                  printf("%c",ch);

              fclose(fp);
              getch();
       }
