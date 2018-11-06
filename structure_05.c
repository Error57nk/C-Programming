#include<stdio.h>
#include<conio.h>

struct std{
	int roll;
	char name[10];
	char dep[5];
};

main()
{
	struct std b[20];
	int i=0, n;
	printf("\n Enter the no of student record you want to store -> ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the name of student %d -> ",i);
		scanf("%s", &b[i].name);
		printf("\n Enter the Roll no %d -> ",i);
		scanf("%d",&b[i].roll);
		printf("\n Enter the deptament %d -> ",i);
		scanf("%s",&b[i].dep);	
	 } 
	
	printf("Name  || Roll  ||   Dep \n");     
	for(i=0;i<n;i++)
	{
		printf("%s    %d     %s ",b[i].name,b[i].roll,b[i].dep);
		printf("\n");
	}
	

}
