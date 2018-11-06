#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	int data;
	struct node* next;
};

main()
{
	struct node * head=NULL;
	struct node * p=NULL;
	struct node * temp=NULL;
	int i ,j,n,g;
	printf("\n Enter the no of elements you want to add -> ");
	scanf("%d",&n);
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter data-> ");
	scanf("%d",&(temp->data));
	temp->next=NULL;
	head=temp;
		
	for(i=1;i<n;i++)
	{	p=head;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter data-> ");
		scanf("%d",&(temp->data));
		temp->next=NULL;
		while(p->next != NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
	p=head;
	while(p !=NULL)
	{
		printf("\n %d",p->data);
		p=p->next;
	}
}
