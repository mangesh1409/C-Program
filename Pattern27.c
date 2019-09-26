/*  Accept number of rows and columns from user and display below pattern
    Input= 	iRow=5   iCol=5
    Output=   A A A A A
    				 B B B B B
    				 C C C C C
    				 D D D D D
    				 E E E E E     				   		                                                               */
				
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
	
	for(i=1,ch='A';i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c ",ch);
		}
		ch++;
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
