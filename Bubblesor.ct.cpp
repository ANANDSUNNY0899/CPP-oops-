/*Sorting techinique : Bubble sort
Sorting is a process of arranging a element in ascending or descending order*/
 
#include<stdio.h>
int main()
{
int a[100],i,j,swap,n;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the %d elements\n",n);
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
for(i=0;i<=n-1;i++)// number of passes
{
for(j=0;j<n-1-i;j++) //nice logic
{
if(a[j]>a[j+1])
{
swap=a[j];
a[j]=a[j+1];
a[j+1]=swap;
}
}
}
printf("Sorted array is\n");
for(i=0;i<=n-1;i++)
printf("%d ",a[i]);
}  
