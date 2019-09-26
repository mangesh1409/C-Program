/*  Accept number of rows and columns from user and display below pattern
    Input= 	iRow=5   iCol=5
    Output=  1   2   3   4   5
             6   7   8   9   10
             11  12  13  14  15
             16  17  18  19  20
             21  22  23  24  25          				   		                                                               */
				
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,iCnt=1;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d ",iCnt);
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
