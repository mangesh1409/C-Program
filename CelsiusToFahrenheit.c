// Accept temperature in Celsius and convert it into Fahrenheit

#include<stdio.h>

float Convert(float fNo)
{
	float fAns=0.0;
	
	fAns=((9*fNo)/5) + 32;
	
	return fAns;
}

int main()
{
	float fValue=0.0;
	float fRet=0.0;
	
	printf("Enter temperature in Celsius: ");
	scanf("%f",&fValue);
	
	fRet=Convert(fValue);
	
	printf("%f  Celsius = %f Fahrenheit",fValue,fRet);
	
	printf("\n");
	 
	 return 0;
}
	 
