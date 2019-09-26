/*  Accept number of rows and columns from user and display below pattern
    Input= 	iRow=5   iCol=5
    Output= 
    				1 1 1 1 1 
    				* * * * *
    				2 2 2 2 2  
    				* * * * *
    				3 3 3 3 3             				   		                                                               */
				
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,iCnt=1;
	
	for(i=1;i<=iRow;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf("* ");
			}
		}
		else
		{
			for(j=1;j<=iCol;j++)
			{
				printf("%d ",iCnt);
			}
			iCnt++;
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0, iValue2=0;
	printf("Enter number number of rows : ");
	scanf("%d",&iValue1);
	
	printf("Enter number number of colums : ");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	printf("\n");
	
	return 0;
}
