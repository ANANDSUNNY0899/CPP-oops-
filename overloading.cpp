//function overloading 
//1>.number of arguement.
/*#include<iostream>
using namespace std;
void sum(int x,int y)
{
	cout<<x+y<<endl;
}
void sum(int a,int b,int c)
{
	cout<<a+b+c<<endl;
}
void sum(int a1,int b1,int c1,int d1)
{
	cout<<a1+b1+c1+d1<<endl;
}
int main()
{
	sum(1,2,3,4);
	sum(44,55);
	sum(66,66,77);
}*/

//2.Type of arguement.
#include<iostream>
using namespace std;
void sum(int x,float y)
{
	cout<<"Fun1 called"<<" "<<x+y<<endl;
}
void sum(float a,int b)//fun2
{
	cout<<"fun2 called"<<" "<<a+b<<endl;
}
int main()
{
	sum(2.5,5);
	sum(5,5.5);
}


//3>.order of arguement 


#include<iostream>
using namespace std;
void sum(int x,float y)
{
	cout<<"Fun1 called"<<" "<<x+y<<endl;
}
void sum(float a,int b)//fun2
{
	cout<<"fun2 called"<<" "<<a+b<<endl;
}
int main()
{
	sum(2.5,5);
	sum(5,5.5);
	sum('a','b');
}

