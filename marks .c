#include<stdio.h>
void main()
{
	int marks;
	printf(" enter the marks");
	scanf("%d",&marks);
	if(marks>=80)
	{
		printf("Grade A");
	}
	else if(marks>= 70&& marks<80)
	{
		printf("Grade B");
	}
	else if(marks>= 60&& marks<70)
	{
		printf("Grade C");
	}
	else if(marks>= 50&& marks<60)
	{
		printf("Grade D");
	}
	else
	{
		printf("FAIL");
	}
	
}
