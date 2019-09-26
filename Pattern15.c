/*  Accept number of rows and columns from user and display below pattern
    Input= 	iRow=5   iCol=5
    Output= 1 2 3 4 5
    				5 4 3 2 1
    				1 2 3 4 5
    				5 4 3 2 1
    				1 2 3 4 5            				   		                                                               */
				
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		if(i%2==0)
		{
			for(j=iCol;j>=1;j--)
			{
				printf("%d ",j);
			}
		}
		else
		{
			for(j=1;j<=iCol;j++)
			{
				printf("%d ",j);
			}
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
