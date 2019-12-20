#include<stdio.h>
main()
{
	int n,i,fact,sum=0,original,last;
	printf("enter the number:");
	scanf("%d",&n);
	original=n;
	
	
	
		
		while(n>0)
		{
			last=n%10;
			fact=1;
			for(i=1;i<=last;i++)
			{
			
			fact=fact*i;
		}
		
	
		sum=sum+fact;
		n=n/10;
	}
	
	if(original==sum)
	printf("strong");
	else
	printf("not strong");
}
	
		
