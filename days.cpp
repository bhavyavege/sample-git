#include<stdio.h>
main()
{
int n,ch;
printf("enter the number");
scanf("%d",&n);
printf("enter the choice");
fflush(stdin);
scanf("%d",&ch);
switch(ch)
{
	case 1 : printf("sunday");break;
	case 2 : printf("monday");break;
	case 3 : printf("tuesday");break;
	case 4 : printf("wednesday");break;
	case 5 : printf("thurday");break;
	case 6 : printf("friday");break;
	case 7 : printf("saturday");break;
	default : printf("\n invalid choice");
	
}
}

