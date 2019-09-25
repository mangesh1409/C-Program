/*  Accept number from user and display below pattern
    Input= 5								               
    Output= 1 1 1 1 1   		     
	    2 2 2 2 2				
	    3 3 3 3 3
	    4 4 4 4 4
	    5 5 5 5 5                                   */
				
#include<stdio.h>

void Pattern(int iNo)
{
	int iRow=0,  iCol=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iRow=1;iRow<=iNo;iRow++)
	{
		for(iCol=1;iCol<=iNo;iCol++)
		{
				printf("%d ",iRow);
		}
		printf("\n");
	}
}

int main()
{
	int iValue=0;
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	printf("\n");
	
	return 0;
}