
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct std{
	int roll;
	char name[10];
	int marks;
};

main()
{
	struct std b; 
	printf("\n Enter the name of student-> ");
	scanf("%s",&b.name);
	printf("\n Enter the Roll no -> ");
	scanf("%d",&b.roll);
	printf("\n Enter the Marks Obtained-> ");
	scanf("%d",&b.marks);
	printf("Your Name  Roll  Marks \n     %s %d   %d",b.name,b.roll,b.marks);
	

}
