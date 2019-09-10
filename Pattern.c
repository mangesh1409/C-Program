//  Accept number from user and display that number of   *  on screen 

#include<stdio.h>
void Display(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
	 	iNo=-(iNo);
	 }
	 for(iCnt=1;iCnt<=iNo;iCnt++)
	 {
	 	printf("$ ");
	 }
	 printf("\n");
}	
	
int main()
{
	int iNo=0;
	
	printf("Enter number: ");
	scanf("%d",&iNo);
	
	Display(iNo);
	return 0;
}
