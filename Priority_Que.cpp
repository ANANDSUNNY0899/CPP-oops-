/*#include<iostream>
#include<string.h>
using namespace std;

struct node
{
string name;
node* link;
};
node* front = NULL;
node* rear = NULL;

void deque()
{
if(front == NULL) cout<<"\n\nSorry! Queue is EMPTY.";

else{
node* temp = front;

if(front == rear)
{
front = NULL; rear = NULL;
}
else
front = front->link;

cout<<"\nDeleted: "<<temp->name;
delete temp; //Free the mempry.
}
}

void enque(string c)
{
node* NEW = new node;
NEW->name = c;
NEW->link = NULL; //Last node link is always NULL

if(front == NULL)
{
front = NEW; rear = NEW;
}
else
{
rear->link = NEW;
rear = NEW;
}

}

int main()
{
int choice;
string name;
do{
cout<<"\n1. Enque";
cout<<"\n2. Deque";
cout<<"\n0. EXIT";
cout<<"\n\n Enter Your Choice: ";
cin>>choice;

switch(choice)
{
case 1: cout<<"\n\nEnter the name of Company: \t";
cin>>name;
enque(name); break;
case 2: deque(); break;
case 0: break;
default: cout<<"\n\nInvalid Input! Please Re-enter: \t";
}
}

while(choice != 0);
return 0;
}

*/


#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *front=NULL;
node *rear=NULL;

void enque(int item){
	node *nd=new node;
	nd->data=item;
	nd->link=NULL;
	
	if(rear==NULL){
	
	 front=nd;rear=nd;
}
	else{
		nd->link=rear;
		rear=nd;
	}
	

}
void deque(){
	if(front==NULL)
		
	cout<<"Sorry Queue is empty"<<endl;

	else{
	node *temp=front;
	
	if(front==rear)
	{
		front=NULL;
		rear=NULL;
	}
	else
	front=front->link;
	cout<<"Deleted Queue is "<<temp->data<<" "<<endl;
	delete temp;
}
	
}
int main(){
	int item;
	cin>>item;
	enque(item);
	
	return 0;
}
