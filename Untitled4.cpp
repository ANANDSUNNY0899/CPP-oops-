#include<iostream>
using namespace std;
int arr[]={10,15,4,5,1};
int n=5;
void insertion_sort(){
    for (int i=0;i<n;i++)
    {
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        
    }
}
void display()
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    insertion_sort();
    display();
}
