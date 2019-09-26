/*  Accept number from user and display below pattern
    Input= 5								               
    Output= 5 4 3 2 1
    				5 4 3 2 1
    				5 4 3 2 1
    				5 4 3 2 1	
    				5 4 3 2 1   		                                                               */
				
#include<stdio.h>

void Pattern(int iNo)
{
	int iRow=0,  iCol=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iRow=iNo;iRow>=1;iRow--)
	{
		for(iCol=iNo;iCol>=1;iCol--)
		{
				printf("%d ",iCol);
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
