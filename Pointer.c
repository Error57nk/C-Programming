#include<stdio.h>
#include<stdlib.h>

main()
{
	int *p,a ,b;
	a=20;
	p=&a;
	b=*p;
	printf("%d",b);
}
