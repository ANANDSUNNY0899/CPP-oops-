/*#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *start=NULL;

void insert_sort(){
	int item;
	node *nd = new node;
	cout<<"Enter the element to be inserted ";
	cin>>item;
	nd->data=item;
	nd->link=NULL;
	
	if(start==NULL)
	{
		nd->link=start;
		start = nd;	
	}
	else{
		node *pre=NULL,*ptr=start;
		while(ptr!=NULL && ptr->data<=item){
			pre=ptr;
			ptr=ptr->link;
		}
		if(pre==NULL)
		start=nd;
		else
		pre->link=nd;
	}
	}
	void display(){
		node *ptr=start;
		while(ptr!=NULL){
			cout<<ptr->data<<"->";
			ptr=ptr->link;
		}
		cout<<"NULL"<<endl;
	}
	int main(){
		int n;
		cout<<"Enter thenumber of node to be inserted:";
		cin>>n;
		for(int i=0;i<n;i++)
		
		insert_sort();
	cout<<"Sorted Linked list ";
		display();
		
		return 0;
	}
	
	
/*#include<iostream>
using namespace std;

struct node
{
char data;
node *link;
};

node *start = NULL;

void traverse()
{
node *ptr = start;
while(ptr != NULL)
{
cout<<ptr->data <<" ";
ptr = ptr->link;
}
}

void insert_beg()
{
node *nd = new node;
cout<<"\nEnter the Data: ";
cin>>nd->data;

if(start == NULL)
{
nd->link = NULL;
start = nd;
}
else
{
nd->link = start;
start = nd;
}
}

void insert_end()
{
node *nd = new node;
cout<<"\nEnter the Data: ";
cin>>nd->data;

if(start == NULL)
{
nd->link = NULL;
start = nd;
}
else
{
node *x = start;
while(x->link != NULL)
x = x->link;
//x contains the address of the last node

nd->link = NULL;
x->link = nd;
}
}

int main()
{
for(int i=0; i<5; i++) insert_end();

traverse();
return 0;
}

//I have taken help from chat gpt.


#include <iostream>
using namespace std;

// Define a structure for a node
struct node {
    int data;
    node* link;
};

node* start = NULL;

// Function to insert a new element in sorted order
void insert_sort() {
    int item;
    node* nd = new node;
    cout << "Enter the element to be inserted: ";
    cin >> item;
    nd->data = item;
    nd->link = NULL;

// If the linked list is empty or the new element is smaller than the first element
    if (start == NULL || item < start->data) {
        nd->link = start;
        start = nd;
        return;
    }

// Find the correct position to insert the new node while maintaining sorted order
    node* pre = NULL;
    node* ptr = start;
    while (ptr != NULL && item >= ptr->data) {
        pre = ptr;
        ptr = ptr->link;
    }

// Insert the new node between pre and ptr
    pre->link = nd;
    nd->link = ptr;
}

// Function to display the linked list.
void display() {
    node* ptr = start;
    while (ptr != NULL) {
        cout << ptr->data << "->";
        ptr = ptr->link;
    }
    cout << "NULL" << endl;
}

int main() {
    int n;
    cout << "Enter the number of nodes to be inserted: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        insert_sort();

    cout << "Sorted Linked List: ";
    display();

    return 0;
}
*/


//practised;

#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
void insert_beg(int ele){
	node *start=NULL;
	node *newnode=start;
	newnode->data=ele;
	newnode->next=start;
	start=newnode;
	
}
/*void insert_end(int ele){
	node *start=NULL;
	node *newnode=start;
	while(newnode->next!=NULL){
	newnode->data=ele;
	newnode->next=NULL;
}
}*/
void display(){
	node *start=NULL;
	node *temp=start;
	while(temp->next!=NULL){
		cout<<temp->data;
		temp->next;
	}
	
}
int main(){
	int n;
	cout<<"Enter the number of nodes to be inserted :";
	cin>>n;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		insert_beg(ele);
		display();
	}
}
