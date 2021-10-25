#include<stdio.h>
int main()
{
	//variable
	int phy, che, mat, eng, tot;
	
	// initialization
	phy= 50,che=60,mat=70,eng=80;
	
	// calculation
	tot=phy+che+mat+eng;
	
	//out put
	printf(" marks in physics:%d\n,marks in chemistry:%d\n,marks in maths:%d\n,marks in engilish:%d\n",phy,che,mat,eng);
	printf("total marks:%d",tot);
}
