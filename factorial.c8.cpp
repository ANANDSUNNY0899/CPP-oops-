// function to return factorail of a number using function
// with arguements and with return 
#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Factorail of %d is %d",n,factorial(n));
}
int factorial(int n)
{
	int i=1,f=1;
	for(i=1;i<=n;i++)
	    f=f*i;
	return f;
}
