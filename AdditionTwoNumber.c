#include<stdio.h>

int add(int,int);

int main()
{
	int no1=0,no2=0;
	int iret=0;
	
	printf("Enter number 2 number\t");
	scanf("%d%d",&no1,&no2);
	
	iret=add(no1,no2);
	printf("\n");
	printf("Addition is %d\t",iret);
	
	return 0;
}

int add(no1, no2)
{
	int ans=0;
	ans=no1+no2;
	
	return ans;
}
