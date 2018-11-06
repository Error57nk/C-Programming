#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
	char st[10],c[20];
	int n=0,i=0,j=0,b=0;
	scanf("%s",st);
	printf("\n %s String is -> ",st);
	
	b=strlen(st);
	for(i=0;i<b;i++)
	{
		j=0;
		while(st[i] != '(')
			{
				c[j]=st[i];
				j++;
				i++;	
			}
			c[j]='\0';
			n=atoi(c);
			j=0;
			i++;
		while(st[i]!=')')
			{
				c[j]=st[i];
				j++;
				i++;
			}
			c[j]='\0';
		for(j=0;j<n;j++)
			{
			printf("%s",c);
			}		
	}
}
