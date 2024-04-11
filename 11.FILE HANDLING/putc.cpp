#include<stdio.h>
#include<conio.h>

       main()
       {
              FILE *fp;
              char ch;

              fp = fopen("file.txt","w");            //Statement   1

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                    
              }

              while((ch=getchar())!='\n')           //Statement   2
                  fputc(ch,fp);

              printf("\nData written successfully...");

              fclose(fp);
              getch();
       }
