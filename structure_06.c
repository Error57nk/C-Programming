#include<stdio.h>
#include<conio.h>

struct student{
	char name[10];
	int roll;
	char sex[5];
	char sec[5];
};
void print(struct student s[],int n);
void feed(struct student s[],int n);

main()
{
	struct student p[10];
	int n;
	printf("Enter the No of Entery \n");
	scanf("%d",&n);
	feed(p,n);
	print(p,n);
	
}

void feed(struct student s[],int n){
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("\n Enter Name-> ");
		scanf("%s",&s[i].name);
		printf("\n Enter roll-> ");
		scanf("%d",&s[i].roll);
		printf("\n Enter Sex M/F -> ");
		scanf("%s",&s[i].sex);
		printf("\n Enter Sec-> ");
		scanf("%s",&s[i].sec);
	}
}
void print(struct student s[],int n){
	int i=0;
	printf("Name	Roll     Sex	 sec \n");
	for(i=0;i<n;i++)
	{
		printf("%s		%d	%s	%s",s[i].name,s[i].roll,s[i].sex,s[i].sec);
	
		printf("\n");
	}
}
