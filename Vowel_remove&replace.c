#include<stdio.h>
main()
{
	char a[20];
	int i=0;
	printf("Enter the word to extract the vowel and replace with # \n");
	gets(a);
	printf("%s \n",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' ||a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			a[i]='#';
		}
	}
	
		printf("%s	",a);
	
}

