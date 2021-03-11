#include <stdio.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* current = NULL;

void display()
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
}
void create_list(int x)
{
    struct node* link= (struct node*) malloc(sizeof(struct node));
    link->data= x;
    link->next= head;
    head=link;
}


int main(void) {
	// your code goes here
	create_list(2);
	create_list(4);
	create_list(6);
	create_list(8);
	display();
	
	return 0;
}

