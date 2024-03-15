//write a program to calculate sum of first n number using recurssion
#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("Enter n ");
	scanf("%d",&n);
	printf("Sum is %d ",sum(n));
}
int sum(int n)
{
	if(n<=0)
	return 0;
	else
	return(n+sum(n-1));
}
