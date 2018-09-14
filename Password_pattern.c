#include<stdio.h>
main()
{
	char name[10],pass[10],ch;
	int i;
	char p[10]={'1','2','3','4','\0'};
	printf("Enter user name \n");
	gets(name);
	printf("Enter your 4 digit Pass \n");
	for(i=0;i<4;i++)
	{
		ch=getch();
		pass[i]=ch;
		ch='*';
		printf("%c",ch);
	}
	pass[i]='\0';
	if(pass[1]==p[1])
		printf("\n %s is your user name \n %s is your Password",name,pass);
	else
		printf("\n Wrong password");
}
