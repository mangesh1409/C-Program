/* Accept number from user and print that number of  * on screen
	Input:   		5
	Output:    	*   *   *   *   *														*/
	
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
	int i=0;
	
	if(iNo<=0)
	{
		return;
	}
	
	for(i=1;i<=iNo;i++)
	{
		printf("* ");
	}
	printf("\n");
}
	
	
	
	
	
	
	
