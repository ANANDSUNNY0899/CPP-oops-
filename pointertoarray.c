/*pointer to an array
A pointer can be used to access the elements of array.In this case we need
to address of firt or base element of array in the pointer.*/

/*#include<stdio.h>
int main()
{
	int a[5],i,*p;
	printf("Enter the element of an array\n");
	for(i=0;i<=4;i++)
	    scanf("%d",&a[i]);
	p=&a[0];// p=a;
	printf("Array elements using pointer are\n");
	for(i=0;i<=4;i++)
	    printf("%d ",*(p+i));    
}*/

//Program to find largest element in array of 10 elements by using pointer to array*/

#include<stdio.h>
int main()
{
	int a[10],i,largest,*ptr;
	printf("Enter the element of an array\n");
	for(i=0;i<=9;i++)
	    scanf("%d",&a[i]);
	ptr=&a[0];// pointer ptr points to first element of an array
	largest = *ptr;
	for(i=1;i<=9;i++)
	{
		if(a[i]>largest)
		    largest=a[i];
	}
	printf("Largest element is %d ",largest);
    
}
