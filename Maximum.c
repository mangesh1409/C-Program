/* Accept 2 number from user and return largest number from that numbers
	Input:      12    45
	Output:		45																				*/
	
#include<stdio.h>

int Maximum(int,int);

int main()
{
	int iValue1=0, iValue2=0, iRet=0;
	
	printf("Enter 1st number: ");
	scanf("%d",&iValue1);
	
	printf("Enter 2nd number: ");
	scanf("%d",&iValue2);
	
	iRet=Maximum(iValue1,iValue2);
	
	printf("Maximum between %d and %d is %d\n",iValue1,iValue2,iRet);
	
	return 0;
}

int Maximum(int iNo1, int iNo2)
{
	if(iNo1>iNo2)
	{
		return iNo1;
	}
	else
	{
		return iNo2;
	}
}
