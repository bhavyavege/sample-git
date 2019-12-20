#include<stdio.h>
main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	printf(n%5==0&&n%11==0?"divisible 5 and 11":n%5==0? "divisible 5":n%11==0? "divisible by 11":"not divisible");
}
