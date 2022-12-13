#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node*head;

int main()
{
	head=NULL;
	struct node*first=(struct node*)malloc(sizeof(struct node));
	struct node*second=(struct node*)malloc(sizeof(struct node));
	
	head=first;
	first->data=8;
	first->link=second;
	struct node*third=(struct node*)malloc(sizeof(struct node));
	second->data=9;
	second->link=third;
	struct node*fourth=(struct node*)malloc(sizeof(struct node));
	third->data=10;
	third->link=fourth;
	fourth->data=11;
	fourth->link=NULL;
	int n,i=1;
	printf("Enter the choice: ");
	scanf("%d",&n);
	struct node* temp=head;
	while(i<=n)
	{
		if(i==n)
		printf("%d ",temp->data);
		else;
		temp=temp->link;
		i++;
	}
	return 0;
	
}

