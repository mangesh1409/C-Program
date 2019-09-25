//  Accept number from user and display below pattern
//  Input= 5												Input=3	               
//  Output= 1 2 3 4 5  * * * * * 5 4 3 2 1  		Output=  1 2 3 * * * 3 2 1

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
		printf("%d ",iCnt);
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("* ");
	}
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d ",iCnt);
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
