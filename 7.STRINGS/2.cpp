#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
   char name[20][20];
   char temp[20];
   int i,j,n,l;
   printf("Enter the no. of string to be sorted");
   scanf("%d",&n);
   printf("Enter %d strings:\n", n);
   for(i=0;i<=n;i++)
      gets(name[i]);
   for(i=0;i<=n;i++)
   {
      for(j=i+1;j<=n;j++)
      {
          l = strcmp(name[i], name[j]);
          if(l>0) // if first string is greater then swap
          {
            strcpy(temp, name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
          }
      }
   }
   puts("Sorted list is:\n");
   for(i=0;i<=n;i++)
      puts(name[i]);
   getch();
}        
