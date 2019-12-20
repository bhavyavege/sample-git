#include<stdio.h>
main()
{
	int a,b,c,total;
	float avg;
	printf("enter the no:");
	scanf("%d%d%d",&a,&b,&c);
	total=a+b+c;
	avg=(float)total/3;
	printf("%f",avg);
}
