/* Accept number from user and check wheather that number is divisible by 3 & 5
	Input:  27       Output:  NOT Divisible
	Input:  15	    Output:  Divisible by 3 & 5																		*/
	
#include<stdio.h>

#define  TRUE  1
#define  FALSE  0

typedef int BOOL;

BOOL Check(int);

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	bRet=Check(iValue);
	
	if(bRet==TRUE)
	{
		printf("%d is Divisible by 3 & 5\n",iValue);
	}
	else
	{
		printf("%d is not  Divisible by 3 & 5\n",iValue);
	}
	
	return 0;
}

BOOL Check(int iNo)
{
	if((iNo%3==0)&&(iNo%5==0))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
