/*#include <iostream> 
using namespace std; 

  
class Distance { 
public: 
    
    int feet, inch; 
  
    Distance() 
    { 
        this->feet = 0;
        this->inch = 0; 
    } 
  
    Distance(int f, int i) 
    { 
        this->feet = f; 
        this->inch = i; 
    } 
  
  
    // Declaring friend function  
    // using friend keyword
	 
    friend Distance operator + (Distance&,  Distance&);
    
}; 
  
// Implementing friend function  
// with two parameters
// Call by reference


Distance operator+(Distance& d1, Distance& d2)  
{ 
    // Create an object to return 
    Distance d3; 
  
    d3.feet = d1.feet + d2.feet; 
    d3.inch = d1.inch + d2.inch; 
  
  
    // Return the resulting object 
  
    
    
    return d3; 
    
} 
  
// Driver Code 
int main() 
{ 
    int a,b;
    cin>> a >>b;
    int c,e;
    cin>>c>>e;
    Distance d1(a, b); 
    Distance d2(c, e); 
    Distance d3; 
  
    // Use overloaded operator 
    
    d3 = d1 + d2; 
  
    cout << "\nTotal Feet & Inches: " <<  d3.feet << "'" << d3.inch; 
    return 0; 
}

*/

#include<iostream>
using namespace std;
class Complex
{
	int real,imag;
	public:
		Complex(int r=0,int i=0)
		{
			real = r;
			imag = i;
		}
		Complex operator+(Complex obj)
		{
			Complex res;
			res.real = real + obj.real;
			res.imag = imag + obj.imag;
			return res;
		}
		friend Complex operator+(Complex obj){
		}
		void print()
		{
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
};
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	Complex e(a,b);
	Complex e1(c,d);
	Complex e3 = e+e1;
	e3.print();
}



