#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;
void trav(struct node *a);
main()
{
	node *p, *temp, *start;
	int n,val,i;
	printf("\n Enter the total node-> ");
	scanf("%d",&n);
	printf("\n ***Enter The Data Now*** \n");
	printf("\n Enter the Data -> ");
	scanf("%d",&val);
	temp=(node *)malloc(sizeof(node));
	temp->data=val;
	temp->next=NULL;
	p=temp;
	start=temp;
	
	for(i=1;i<n;i++)
	{
	printf("\n Enter the Data -> ");
	scanf("%d",&val);
	temp=(node *)malloc(sizeof(node));
	temp->data=val;
	temp->next=NULL;
	p=temp;
	p->next=temp;	
	}	
	trav(start);
	printf("\n Start %d",start);
	
}

