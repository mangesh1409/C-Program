//  Accept number from user and display below pattern
//  Input=5  									Input= 8
//  Output=  1  *  3  *  5						Output=  1  *  3  *  5  *  7  *

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("* ");
		}
		
		else
		{
			printf("%d ",iCnt);
		}
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
