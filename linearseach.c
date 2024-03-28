// Linear seach

#include<stdio.h>
int main()
{
	int a[10],i,ele,flag=0;
	printf("Enter the elements of array\n");
	for(i=0;i<=9;i++)
	    scanf("%d",&a[i]);
	printf("Enter the element to seach\n");
	scanf("%d",&ele);
	for(i=0;i<=9;i++)
	{
		if(ele==a[i])
		{
			flag=1;
			break;
		}
	}    
    if(flag==1)
        printf("Element found in the array at %d loc \n",i+1);
    else
        printf("Element do not exit in the array\n");
}
	    
