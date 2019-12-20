#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the no:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf( a==b&&b==c? "equal": a>b&&a>c? "a big": b>c? "b big":"c is big");
}
