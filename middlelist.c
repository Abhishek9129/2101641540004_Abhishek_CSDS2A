#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node*head;

struct node* middle(struct node*head)
{
	int cnt=0;
	struct node* temp=head;
	while(temp!=NULL)
	{
		temp=temp->link;
		cnt++;
	}
	temp=head;
	int a=cnt/2;
	if(cnt&2==0)
	a=a-1;

	while(a>0)
	{
		temp=temp->link;
		a--;
	}
	return temp;
}


int main()
{
	head=NULL;
	struct node*first=(struct node*)malloc(sizeof(struct node));
	struct node*second=(struct node*)malloc(sizeof(struct node));
	head=first;
	first->data=9;
	first->link=second;
	struct node*third=(struct node*)malloc(sizeof(struct node));
	second->data=8;
	second->link=third;
	struct node*fourth=(struct node*)malloc(sizeof(struct node));
	third->data=10;
	third->link=fourth;
	struct node*fifth=(struct node*)malloc(sizeof(struct node));
	fourth->data=20;
	fourth->link=fifth;
	fifth->data=25;
	fifth->link=NULL;
	
	struct node* l=middle(head);
	printf("%d",l->data);
	

	return 0;
}
	


