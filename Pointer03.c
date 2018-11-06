#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
	int data;
	struct node * next;
}node;

node * creat(int n);
void printnode(node * head);
main()
{	
	int n=0;
	node *H=NULL;
	printf("\n Enter the no of elements you want to add -> ");
	scanf("%d",&n);
	H=creat(n);
	printnode(H);
	getch();
 } 
 
 node * creat(int n)
 {	
 	int i=0;
 	node * temp=NULL;
 	node * p=NULL;
 	node * head=NULL;
 	for (i=0;i<n;i++)
 	{
 		temp=(node *)malloc(sizeof(node));
 		printf("\n Enter data at %d position ->  ",i+1);
 		scanf("%d",&(temp->data));
 		temp->next=NULL;
 		if(head==NULL)
 		{
 			head=temp;
		}
		else
		{
			p=head;
			while(p->next != NULL)
			{
				p=p->next;
			}
			p->next=temp;
		
		}
	 }
	 return head;
 }
 void printnode(node * head)
 {	
 	node * p;
 	p=head;
 	while(p != NULL)
 	{
 		printf("\n %d",p->data);
 		p=p->next;
	 }
 }
