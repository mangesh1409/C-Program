#include<stdio.h>

int swap(int,int);

int main()
{
	int no1=0,no2=0;
	
	printf("Enter number 2 number ");
	scanf("%d%d",&no1,&no2);
	printf("Number before swapping %d %d\n",no1,no2);
	
	swap(no1,no2);
	
	return 0;
}

int swap(int no1,int no2)
{
	int temp=0;
	temp=no1;
	no1=no2;
	no2=temp;
	
	printf("Number after swapping %d %d\n",no1,no2);
}
