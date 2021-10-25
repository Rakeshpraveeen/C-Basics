#include<stdio.h>
int main()                                                                                                                                                                          
{
	//variable
	int phy, che, mat, eng, tot;
	
	// initialization
	phy= 50;
	che=60;
	mat=70;
	eng=80;
	
	// calculation
	tot=phy+che+mat+eng;
	
	//out put
	printf("marks in physics:%d\n",phy);
	printf("marks in chemistry:%d\n",che);
	printf("marks in maths:%d\n",mat);
	printf("marks in english:%d\n",eng);
	printf("total marks:%d",tot);
}
