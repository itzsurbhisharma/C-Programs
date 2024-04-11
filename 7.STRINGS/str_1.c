//PROGRAM TO SHOW STRINGS ARE INTIALIZED
#include<stdio.h>
#include<conio.h>
main()
{
      char name1[]="LOVELY Professional University";
      char name2[20]="PROFESSIONAL";
      char name3[20]={'U','N','I','V','E','R','S','I','T','Y','1'};
      char name4[]={'U','N','I','V','E','R','S','I','T','Y','\0'};
      char name5[7]={'L','O','V','E','L','Y'};
      printf("various inputs made are \n");
      printf("%s\n",name1);
       printf("%s\n",name2);
        printf("%s\n",name3);
        printf("%s\n",name4);
        printf("%s\n",name5);
        getch();
        }
