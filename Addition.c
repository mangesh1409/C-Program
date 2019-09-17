//Accept numbers from user and add them until we get number as -1 from user and print the addition

#include<stdio.h>

int main()
{
	int iValue=0;
	int iSum=0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	while(!(iValue==-1))
	{
		iSum=iSum+iValue;
		scanf("%d",&iValue);
	}
	printf("Addition is %d \n",iSum);
	
	return 0;
}
