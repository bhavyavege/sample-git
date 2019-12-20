#include<stdio.h>
main()
{
	int n;
	printf("enter the year:");
	scanf("%d",&n);
	printf((n%4==0&&n%100!=0)||n%400==0?"leap year":"not leap year");
}
