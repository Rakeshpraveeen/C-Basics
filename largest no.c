#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf(" enter a number");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("%d is largest number",a);
	}
	else if (b>a && b>c && b>d)
	{
		printf("%d is largest number",b);
	}
	else if (c>a && c>b && c>d)
	{
		printf("%d is largest number",c);
	}
	else
	{
		printf("%d is largest number",d);
	}
}
