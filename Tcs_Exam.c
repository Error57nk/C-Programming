#include <stdio.h>
#include <math.h>

main()
{
	int a[180],o=2,e=1,i,n=27,aa,b;
	float x,y;
	a[0]=0;
	a[1]=0;
	for(i=2;i<100;)
	{
		a[i]=o;
		o=o+2;
		i++;
		a[i]=e;
		e=e+2;
		i++;
	}
	for(i=0;i<100;i++)
	{
		printf("%d \n",a[i]);
	}
	printf("%d   %d \n",a[n],a[n-1]);
	aa=a[n];
	b=a[n];
	x=aa/b;
	y=56/12;
	printf("the result is %f --> \n ",x);
	printf("the result is %f --> ",y);
}


