/*#include<iostream>
using namespace std;
int main(){
	float *p;
	float p1=23.56;
	p=&p1;
	cout<<p<<endl;
	cout<<p-5;
	
}
//Arthimetical operation.
#include<iostream>
using namespace std;
int main()
{
	int a[]={1,3,4,5};
	int *b,*c;
	b=&a[0];
	c=&a[3];
	cout<<c-b;
}
*/


//Class containing a pointer as a data member.

#include<iostream>
using namespace std;
class one{
	int *a,b,c;
	public:
		void take(){
			cout<<"Enter the data: ";
			cin>>b;
			a=&b;
			
		}
		void evenodd(){
			if(*a%2==0)
			cout<<"even"<<endl;
			else
			cout<<"odd"<<endl;
		}
		void prime()
		{
			for(int i=2;i<b;i++)
			
				if(*a%i==0)
				
					cout<<"prime";
				
				cout<<"Not prime";
		
		}
			
};
int main()
{
	one obj;
	obj.take();
	obj.evenodd();
	obj.prime();
}
