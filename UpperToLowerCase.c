//Accept upper case alphabet and convert it into lower case

#include<stdio.h>

int main()
{
	char ch='\0';

	printf("Enter character ");
	scanf("%c",&ch);
	
	if((ch>='A')&&(ch<='Z'))
	{
		ch=ch-'A'+'a';
		printf("%c",ch);
	}
	else 
	{
		printf("Wrong input");
	}
	printf("\n");
	return 0;
}
