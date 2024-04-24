// to print factorial of numbers from 1 to 20
#include<stdio.h>
int main()
{
	int i=1,n,f,x;
	for(i=1;i<=20;i++)
	{
		n=i;
		f=1,x=1;
		while(x<=n)
		{
			f=f*x;
			x++;
		}
		printf("Factorial of %d is %d\n",i,f);
	}
}
