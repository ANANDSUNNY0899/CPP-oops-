// control statement
// break and continue statements
// break statements is used break a loop or switch
#include<stdio.h>
int main()
{
	int x=1;
	while(x<=10)
	{
		if (x==5)
		    break;
	printf("%d ",x);
	x++;	    
	}
	printf("\nEnd of loop\n");
}
