// local abd global
#include<iostream>
using namespace std;
int name=20;
void fun()
{
	cout<<name<<endl;
}
int main()
{
	{
	int name=100;
	cout<<::name<<endl;
    }
    fun();
cout<<name;
}

