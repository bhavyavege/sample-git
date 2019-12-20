#include<stdio.h>
main()
{
	char c;
	printf("enter character:");
	scanf("%c",&c);
	printf(c>=65&&c<=90?"upper case":c>=97&&c<=122? "lower case":c>=48&&c<=57 ?"digit":" ");
}
