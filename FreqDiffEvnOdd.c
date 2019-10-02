/*    Accept N numbers from user and return diffrence between frequency of even numbers & odd numbers
	  Input :
				N : 10
				Elements : 85  66  30  45  66  65  66 18  66  32
				Output :		  4 (7-3) 																		*/

#include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>

int FreqDiff(int arr[] , int iLength);

int main()
{
	int iSize=0, iRet=0, iCnt=0;
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
	
	iRet=FreqDiff(p,iSize);
	
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
		printf("Diffrence between frequency of even numbers & odd numbers is %d \n",iRet);
	}
		
	free(p);
	
	return 0;
}

int FreqDiff(int arr[],int iLength)
{
	int iCnt=0, iEcnt=0, iOcnt=0;
	
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
		if(arr[iCnt]%2==0)
		{
			iEcnt++;
		}
		else
		{
			iOcnt++;
		}
	}
		return iEcnt-iOcnt;
}
	
	
