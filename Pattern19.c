/*  Accept number from user and display below pattern
    Input= 5 
    Output= 
    				1 5 1 5 1
    				2 4 2 4 2
    				3 3 3 3 3
    				4 2 4 2 4
    				5 1 5 1 5            				   		                                                               */
				
#include<stdio.h>

void Pattern(int iNo)
{
	int i=0,j=0,iCnt=iNo;
	
	for(i=1;i<=iNo;i++,iCnt--)
	{
		for(j=iNo;j>=1;j--)
		{
			if(j%2==0)
			{
				printf("%d ",iCnt);
			}
		
			else
			{
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue=0;
	printf("Enter number number : ");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	printf("\n");
	
	return 0;
}
