
#include<stdio.h>
#include<conio.h>

struct std
{
	int roll;
	char name[10];
	int marks;
};

main()
{
	struct std a = {12,"Ram",32};
	//b.roll=12;
//	b.name="Nitesh";
//	b.marks=42;
	printf("\n %s your roll no is %d and you got %d out of 50 ",a.name,a.roll,a.marks);
//	printf("\n %s your roll no is %d and you got %d out of 50 "b.name,b.roll,b.marks);
}
