#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head= NULL;

void display()
{
    node*ptr =head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void insertatfirst(int x)
{
    node* link= new node;
    link->data= x;
    link->next= head;
    head=link;
}
int main() {
	// your code goes here
	insertatfirst(8);
	insertatfirst(6);
	insertatfirst(4);
	insertatfirst(2);
	display();
	return 0;
}
