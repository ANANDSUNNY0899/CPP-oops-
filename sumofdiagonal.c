//WAP to input a 2d array of three row and three coloumn and calculate the sum of diagonal element


#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum1=0;
	printf("Enter the element of 2d array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		printf("%d ",a[i][j]);
		if(i==j)
		    sum1=sum1+a[i][j];
	}
	printf("\n");

}
printf("Sum of lect diagonal is %d ",sum1);
}

