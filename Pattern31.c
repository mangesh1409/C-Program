/*  Accept number of rows and columns from user and display below pattern
    Input= 	iRow=5   iCol=5
    Output=   			 a a a a a 
    				 b b b b b
    				 c c c c c 
    				 d dd d d
    				 e e e e e     				   		                                                               */
				
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
	
	for(i=1,ch='a';i<=iRow;i++,ch++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c ",ch);
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
