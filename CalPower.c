//   Input -  1st number  2 , 2nd number 3   
//  Output-    2*2*2=8
//   Input -  1st number  5 , 2nd number 4   
//  Output-    5*5*5*5=625

#include<stdio.h>

typedef unsigned long int ulong;

 ulong Power(int iNo1,int iNo2)
{
	int iCnt=0;
	ulong iAns=1;
	
	if(iNo1<0)
	{
	 	iNo1=-(iNo1);
	 }
	 
	 if(iNo2<0)
	{
	 	iNo2=-(iNo2);
	 }
	 
	 for(iCnt=1;iCnt<=iNo2;iCnt++)
	 {
	 	iAns=iNo1*iAns;
	 }
	 
	 return iAns;
}	
	
int main()
{
	int iValue1=0,iValue2=0;
	ulong iRet=0;
	
	printf("Enter number 1st number: ");
	scanf("%d",&iValue1);
	
	printf("Enter number 2nd number: ");
	scanf("%d",&iValue2);
	
	iRet=Power(iValue1,iValue2);
	
	printf("Result is %ld",iRet);
	printf("\n");
	return 0;
}
