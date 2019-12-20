#include<stdio.h>
main()
{
	int n,count=0,r;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
		count++;
	n=n/10;
	}
	
	printf("%d",count);
}
