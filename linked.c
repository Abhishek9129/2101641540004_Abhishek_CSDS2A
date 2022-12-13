#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node*head;
void InsertBegin(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=head;
	head=temp;
	}

void InsertBefore(int x,int y)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* last=head;
	temp->data=x;
	temp->link=NULL;
	while(last->link->data!=y)
	{
		last=last->link;
	}
	temp->link=last->link;
	last->link=temp;
}
	
void InsertEnd(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* last=head;
	temp->data=x;
	temp->link=NULL;
	if(head==NULL)
	head=temp;
	else{
	while(last->link!=NULL)
	{
		last=last->link;
	}
	last->link=temp;
	}
}

void DeleteHead()
{
	struct node* temp;
	temp=head;
	head=head->link;
	free(temp);
}

DeleteBefore(int x)
{
	struct node* prev=head;
	struct node* pos=head;
	
	while(pos->link->data!=x)
	{
		prev=pos;
		pos=pos->link;;
	}
	prev->link=pos->link;
	free(pos);
}

void DeleteEnd()
{
	struct node* prev=NULL;
	struct node* last=head;
	while(last->link!=NULL)
	{
		prev=last;
		last=last->link;
	}
	prev->link=NULL;
	free(last);	
}
int main()
{
	head=NULL;
	struct node*first=(struct node*)malloc(sizeof(struct node));
	struct node*second=(struct node*)malloc(sizeof(struct node));
	struct node*third=(struct node*)malloc(sizeof(struct node));
	
	head=first;
	first->data=9;
	first->link=second;
	
	second->data=8;
	second->link=third;
	
	third->data=10;
	third->link=NULL;
	
	InsertBegin(5);
	InsertEnd(3);
	InsertBefore(7,second->data);
	DeleteHead();
	DeleteEnd();
	DeleteBefore(third->data);
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->link;
	}
	return 0;
	
}

