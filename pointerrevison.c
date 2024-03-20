/*#include<stdio.h>
int main()
{
	int *pnum;
	char *pch;
	float *pfnum;
	double *pdnum;
	long *plnum;
	printf("\n Size of integer pointer=%d",sizeof(pnum));
	printf("\n Size of character pointer=%d",sizeof(pch));
	printf("\n Size of float pointer=%d",sizeof(pfnum));
	printf("\n Size of double pointer=%d",sizeof(pdnum));
	printf("\n Size of long pointer=%d",sizeof(plnum));
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int a[]={12,3,45,6,78};
	int *p;
	p=&a[3];
	printf("p is %d ",p);
	p=p+1;
	printf("\n*p is %d ",*p);
}*/

/*#include<stdio.h>
int main()
{
	int a[]={12,12,45,6,78};
	int *p1,*p2;
	p1=&a[1];
	p2=&a[2];
	if(p1==p2)
	   printf("Both pointer will have memeory location");
	else
	   printf("Both will have different memeory locaton");
}*/

#include<Stdio.h>
int main()
{
	int a[]={12,3,45,67,8};
	int *p1,*p2;
	p1=&a[4];
	p2=&a[1];
	printf("p1-p2 is %d",p1-p2);//4-1=3
	printf("\n*p1-*p2 is %d",*p1-*p2);//8-3=5
}
