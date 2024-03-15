// write a program first n fibbonacci using recursion
#include<stdio.h>
int fibb(int n);
int main()
{
	int n,i;
	printf("Enter n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	printf("%d",fibb(i));
}
int fibb(int n)
{
	if(n==1)// base condition 1
	return 0;
	else if(n==2)// base case 2
	return 1;
	else
	return(fibb(n-1)+fibb(n-2));
}
