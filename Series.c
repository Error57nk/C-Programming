#include<stdio.h>
main()
{
	int a[2000],i,num=2,n;
	float result,pos;
	a[0]=0;
	a[1]=0;
	for(i=2;i<2000;)
	{
		a[i]=num;
		num=num-1;
		i++;
		a[i]=num;
		num=num+3;
		i++;
	}
	
	printf("Enter the position to find result \n");
	scanf("%d",&n);
	printf("\n %d \n %d",a[n],a[n-1]);
	pos=a[n-1]/2;
	printf("\n %f",pos);
	result=a[n]/pos;
	printf("\n The result is as %f :- ",result);
	
}
