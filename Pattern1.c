//  Accept number from user and display below pattern
//  Input=5  Output- 1 2 3 4 5 
//  Input= -5  Output- 1 2 3 4 5 

#include<stdio.h>

void Pattern1(int iNo)
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
}

int main()
{
	int iValue=0;
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	Pattern1(iValue);
	printf("\n");
	
	return 0;
}
