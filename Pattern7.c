//  Accept number from user and display below pattern
//  Input= 5				Input=3	               
//  Output= 3 * 6 * 9 * 12 * 15 * 	Output=  3 * 6 * 9 *

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
		printf("%d * ",3*iCnt);
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
