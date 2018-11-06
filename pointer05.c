#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
	char site[40];
	struct node * next;
}node;

node * creat(int n);
void opp(node * head);

main()
{
	int n=0;
	node * HEAD= NULL;
	printf("\n Enter the no of Site-> ");
	scanf("%d",&n);
	HEAD=creat(n);
	opp(HEAD);
}


node * creat( int n)
{	int i;
	node * p = NULL;
	node * temp = NULL;
	node * head = NULL;
	
	for(i=0;i<n;i++)
	{
		temp=(node *)malloc(sizeof(node));
		//printf("\n Enter the site %d -> ",i);
		scanf("%s",&(temp->site));
		temp->next = NULL;
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
			p->next = temp;
		}
	
	}
	return head;
	
}

void opp(node * head)
{
	node * p =head;
	while(p != NULL)
	{	char *a;
		int len=0,count=0,i;
		printf(" \n %s  ",p->site);
		a=p->site;
		len=strlen(a);
		printf("\n %d",len);
		for(i=4;i<len-4;i++)
		{
			if(a[i]=='a' || a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u')
			{
			
			}
			else
			{
				count++	;
			}
			printf("\n %c",a[i]);
		}
		printf("\n %d / %d ",count+4,len);
		p=p->next;
	}
}
