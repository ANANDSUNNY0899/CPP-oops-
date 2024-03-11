// SWITCH CASE
#include<stdio.h>
#include<process.h>
int main()
{
	int choice,a,b;
	printf("Enter 1 for addition, 2 for substraction and 3 for exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter the value of a and b\n");
			scanf("%d%d",&a,&b);
			printf("sum is %d ",a+b);
			break;
		case 2:
			printf("Enter the value of a and b\n");
			scanf("%d%d",&a,&b);
			printf("sub is %d ",a-b);
			break;
		case 3:
		    exit(0);
		default:
		    printf("Wrong Input\n");	
		      	
	}
	
}
