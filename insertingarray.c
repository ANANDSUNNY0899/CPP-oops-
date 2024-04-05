// inserting an element an array
#include<stdio.h>
int main()
{
int a[100],n,i,ele,loc,j;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the value %d element of array\n",n);
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
printf("original array\n");
for(i=0;i<=n-1;i++)
printf("%d",a[i]);
printf("Enter the value to insert and location\n");
scanf("%d%d",&ele,&loc);
j=n-1;
while(j>=loc)
{
a[j+1]=a[j];
j--;
}
a[loc]=ele;
printf("update array is \n");
for(i=0;i<=n;i++)
printf("%d",a[i]);
}

