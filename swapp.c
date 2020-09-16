#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d",a);
	printf("%d",b);
	return 0;
}
