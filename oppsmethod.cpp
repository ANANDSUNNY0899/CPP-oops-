#include<stdio.h>
using namespace std;
class Car
{
	public:
		void myMethod();//method/or function declared
		
};
void Car::myMethod()
{
	cout <<"Sunny";
}
int main()
{
	Car myObj;
	myObj.myMethod();
	
}
