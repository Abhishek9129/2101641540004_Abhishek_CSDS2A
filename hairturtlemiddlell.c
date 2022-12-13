#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*link;
};
struct node* head=NULL;

int middle()
{
	struct node* fast=head;
	struct node* slow=head;
	
	while(fast!=NULL && fast->link!=NULL && fast->link->link!=NULL)
	{
		slow=slow->link;
		fast=fast->link->link;
	}
	return slow->data;
}
int main()
{
	struct node* first=(struct node*)malloc(sizeof(struct node));
	struct node* second=(struct node*)malloc(sizeof(struct node));
	head=first;
	first->data=5;
	first->link=second;
	struct node* third=(struct node*)malloc(sizeof(struct node));
	second->data=10;
	second->link=third;
	
	struct node* fourth=(struct node*)malloc(sizeof(struct node));
	third->data=15;
	third->link=fourth;
	struct node* fifth=(struct node*)malloc(sizeof(struct node));
	fourth->data=20;
	fourth->link=fifth;
	struct node* sixth=(struct node*)malloc(sizeof(struct node));
	fifth->data=25;
	fifth->link=sixth;
	
	sixth->data=30;
	sixth->link=NULL;
	int a=middle();
	printf("%d",a);
}

