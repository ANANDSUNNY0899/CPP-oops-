//This pointer
#include<iostream>
using namespace std;
class data{
	int x,y,z;
	public:
		void take(){
			cout<<"Enter the data";
			cin>>this->x;
			cin>>y>>z;
		}
		void out(){
			cout<<x<<endl<<this->y<<endl<<this->z<<endl;
		}
};
int main(){
	data s;
	s.take();
	s.out();
}
/*



// for non member function, thispointer are not allowed.

#include<iostream>
using namespace std;
class data{
	int x,y,z;
	public:
		void take(){
			cout<<"Enter the data";
			cin>>this->x;
			cin>>y>>z;
		}
		friend void out(data);
};
void out(data dd)
{
		cout<<dd.x<<endl<<this->y<<endl<<this->z<<endl;
}

int main(){
	data s;
	s.take();
	s.out(dd);
}*/
