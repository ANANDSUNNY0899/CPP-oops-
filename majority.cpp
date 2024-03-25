#include<iostream>
using namespace std;
int main(int arr[],int n)
{
	int el=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(count==0)
		{
			el=arr[i];
			count++;
		}
		if(el==arr[i])
		{
			count++;
		count--;	
		}
		count=0;
		for(int i =0;i<n;i++)
		{
			if(el==arr[i])
			{
				count++;
			}
		}
		if(count >n/2)
		{
			return el;
		return -1;	
		}
	}
}
