#include<stdio.h>
main()
{
	int a;
	printf("Enter the value for a");
	scanf("%d",&a);
	printf("A is %d \n",a);
	a++;
	printf("A is %d \n",a);
	++a;
	printf("A is %d \n",a);
	int b=a++;
	printf("A is %d \n",a);
	printf("B is %d \n",b);
	int c=++a;
	printf("A is %d \n",a);
	printf("C is %d \n",c);
}
