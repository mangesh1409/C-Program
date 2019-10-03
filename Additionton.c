/* Accept number from user and print additon of 1 to that number 
	Input:    		5											7
	Output:      1+2+3+4+5=15			1+2+3+4+5+6+7=28			*/
	
#include<stdio.h>

int Addition(int);

int main()
{
	int iValue=0, iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	iRet=Addition(iValue);
	
	if(iRet==-1)
	{
		printf("Enter valid number");
	}
	else
	{
		printf("Additon is %d ",iRet);
	}
	printf("\n");
	return 0;
}

int Addition(int iNo)
{
	int i=0, iSum=0;
	
	if(iNo<0)
	{
		return -1;
	}
	
	for(i=1;i<=iNo;i++)
	{
		iSum=iSum+i;
	}
	return iSum;
}
	
