/* Accept two numbers from user and return addition of that numbers  
	Input:  7,  5
	Output:  12										*/
	
	
#include<stdio.h>

int Addition(int , int);

int main()
{
	int iValue1=0, iValue2=0,iRet=0;
	
	printf("Enter 1st number: ");
	scanf("%d",&iValue1);
	
	printf("Enter 2nd number: ");
	scanf("%d",&iValue2);
	
	iRet=Addition(iValue1,iValue2);
	
	printf("Addition is %d\n",iRet);
	
	return 0;
}

int Addition(int iNo1, int iNo2)
{
	int iAns=0;
	
	iAns=iNo1+iNo2;
	
	return iAns;
}
	
