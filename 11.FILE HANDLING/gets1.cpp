#include<stdio.h>
#include<conio.h>
#include<string.h>
       main()
       {
              FILE *fp;
              char str[50];

              fp = fopen("file.txt","r");            //Statement   1

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                    
              }

              printf("\nData in file...\n");

              while((fgets(str,50,fp)))
                     printf("%s",str);

              fclose(fp);
              getch();
       }
