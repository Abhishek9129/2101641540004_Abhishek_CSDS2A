#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
void InsertBegin(struct node *head,int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=head;
	head=temp;
}
void count_the_link(struct node *head){
    int count=0;
    if(head == NULL)
    printf("Linked list is empty");
    struct node *ptr =NULL;
    ptr=head;
    while(ptr !=NULL){
        printf("%d-> ",ptr->data);
        count++;
        ptr=ptr->link;
    }
    printf("NULL");
    printf(" \n So the number of element  is  : %d \n",count);
    
}
void add_at_end(struct node *head,int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}
// reverse a linked list using three pointer approach
struct node* reverseLinkedlist(struct node* head)
{
    struct node *prevptr=NULL;//creating three pointers
    struct node *currptr=head;
    struct node *nextptr;
    while(currptr!=NULL)
    {
        nextptr=currptr->link;
        currptr->link=prevptr;//break the node and create a new node
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
// reverse a linked list using recursion 
struct node* reverselinkedlist(struct node* head)
{
	if(head==NULL || head->link==NULL)
	{
		return head;
	}
	else
	{
		struct node *ptr=reverselinkedlist(head->link);
		head->link->link=head;
		head->link=NULL;
		return ptr;
	}
}
int main()
{
    //creating first node to enter the element ;
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    //creating Second  node to enter the element assigning new head;
    struct node *current=(struct node*)malloc(sizeof(struct node));
    current ->data=98;
    current ->link=NULL;
    head->link=current; //generating link  between the linked list
    //creating third  node to enter the element usnig same head;
    current=(struct node*)malloc(sizeof(struct node));
    current ->data=3;
    current ->link=NULL;
    head->link->link=current; 
    //creating fourth node to enter the element usnig same head;
    current=(struct node*)malloc(sizeof(struct node));
    current ->data=99;
    current ->link=NULL;
    head->link->link->link=current;
    current=(struct node*)malloc(sizeof(struct node));
    current ->data=100;
    current ->link=NULL;
    head->link->link->link->link=current;
     add_at_end(head,65);
     add_at_end(head,400);
     add_at_end(head,20); 
     add_at_end(head,10);
    count_the_link(head);
    struct node* newhead=reverseLinkedlist(head);
    count_the_link(newhead);
    struct node* q=reverselinkedlist(head);
    count_the_link(q);
}
  

