// loops
//print fibonacci series
#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i=3;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("%d %d ",a,b); // 0 1
	while(i<=n)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		i++;
		
	}
}
