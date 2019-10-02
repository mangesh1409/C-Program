/*    Accept N numbers from user and one another number as No and 
	   return frequency of that number
	  Input :
				N : 10
				Elements : 85  66  3  45  66  65  66 13  66  32
				No:	66
				Output :		4     																		*/

#include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>

int Frequency(int arr[] , int iLength, int iNo );

int main()
{
	int iSize=0, iRet=0, iCnt=0, iValue=0;
	int *p=NULL;
	
	printf("Enter number of elements: ");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	
	printf("Enter %d elements\n",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element: ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	printf("Enter number to search: ");
	scanf("%d",&iValue);
	
	iRet=Frequency(p,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("Error:Memory Failure\n");
	}
	else if(iRet==-2)
	{
		printf("Error:Size Failure\n");
	}
	else
	{
		printf("Frequency of %d is %d \n",iValue,iRet);
	}
		
	free(p);
	
	return 0;
}

int Frequency(int arr[],int iLength, int iNo)
{
	int iCnt=0, i=0;
	
	if(arr==NULL)
	{
		return -1;
	}
	
	if(iLength<=0)
	{
		return -2;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]==iNo)
		{
			i++;
		}
	}
		return i;
}
	
	
