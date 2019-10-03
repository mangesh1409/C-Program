/* Accept number from user and display its number line
	Input:		4
	Output:   -4  -3  -2  -1  0  1  2  3  4								*/
	
#include<stdio.h>

void Numberline(int);

int main()
{
	int iValue=0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	Numberline(iValue);
	
	return 0;
}

void Numberline(int iNo)
{
	int i=0;
	
	if(iNo<0)
	{
		return;
	}
	
	for(i=-iNo;i<=iNo;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
}
