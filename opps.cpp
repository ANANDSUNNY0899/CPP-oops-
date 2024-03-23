#include<iostream>
using namespace std;
class data
{
	private:
		float a,b;//data members
		
		
		public:
			void in()//member fun1
			{
				cout<<"enter the data";
				cin>>a>>b;
			}
			void process()//member fun 2
			{
				cout<<"result of addition is"<<a+b;
			}
			
};
int main()
{
	int a;
	data d1;
	d1.in();
	d1.process();
	
}


