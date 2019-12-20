#include<stdio.h>
#include<stdlib.h>
main()
{
	 int bal,minbal,avbal,ch,deposit,withdrawal;
	 printf("\n enter two values :");
	 scanf("%d%d",&bal,&minbal);
	 while(1)
	 {
	 
	 
	 printf("\n 1. deposit \n 2. withdraw \n 3. show balance \n  4. Exit");
	 
	printf("\n enter your choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:	printf("enter the amount");
		scanf("%d",&deposit);
		        deposit=bal+deposit;
		      
	 	printf("\n deposite is :%d",deposit);
		   avbal=deposit;break;
		case 2:printf("enter amount to withdraw");
		scanf("%d",withdrawal);
		withdrawal=avbal-withdrawal;
		printf("\n withdrawal is:%d",withdrawal);
		avbal=withdrawal;break;
		case 3:	printf("\n balance=%d",avbal);break;
		
		case 4:exit(0);
		default:printf("\n Invalid choice...!");
	} // switch
  } // while
} // main
