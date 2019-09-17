//Accept lower case alphabate and convert it into upper case

#include<stdio.h>

int main()
{
	char ch='\0';

	printf("Enter character ");
	scanf("%c",&ch);
	
	if((ch>='a')&&(ch<='z'))
	{
		ch=ch-'a'+'A';
		printf("%c",ch);
	}
	else 
	{
		printf("Wrong input");
	}
	printf("\n");
	return 0;
}
