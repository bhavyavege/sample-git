#include<stdio.h>
main()
{
	int i ,n;
	printf("enter the number");
	scanf("%d",&n);
	
if(n%2==1)
n-=1;
	
	while(n>=2)
	{
		printf("\n %d",n);
		n-=2;
	}
	
	}

