#include<stdio.h>
main()
{
	char name[10],rev[10];
	int i,j=0;
	for(i=0;i<10;i++)
		{
			name[i]='\0';
			rev[i]='\0';
		}
	printf("Enter the Name \n");
	gets(name);
	printf(" Hello %s The reverse of your name is ",name);
	
	while(name[j]!='\0')
	{
		j++;
	}
	i=0;
	j=j-1;
	//printf("%d",j);
	for(j;j>=0;j--)
	{
		rev[j]=name[i];
		i++;
		
	}
	printf("\n %s",rev);
}
