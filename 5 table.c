#include<stdio.h>
main()
{
	int n,i;
	i=1;
	printf("enter the number:");
	scanf("%d",&n);
	while(i<=20)
	{
		printf("\n %d X %d = %d",n,i,i*n);
		i++;
		
	}
}
