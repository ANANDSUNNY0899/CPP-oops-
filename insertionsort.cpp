#include<iostream>
using namespace std;
void insertion_sort()
{
	int n,key;
	for(int i=1;i<n;i++)
	{
		int j=j-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	cout<<"/n";
	display();	
	}
}
int arr[]={5,2,9,6,5};
int n=5;
int main()
{
	insertion_sort();
}
void display()
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	insertion_sort()
}
