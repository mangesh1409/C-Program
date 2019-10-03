/* Accept number from user and display its table
	Input:  		3
	Output: 		3  6  9  12  15  18  21  24  27  30		*/
	
#include<stdio.h>

void Display(int);

int main()
{
	int iValue=0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}

void Display(int iNo)
{
	int i=0, iAns=0;
	
	if(iNo==0)
	{
		return;
	}
		
	for(i=1;i<=10;i++)
	{
		iAns=i*iNo;
		printf("%d*%d=%d",iNo,i,iAns);
		printf("\n");
	}
}
