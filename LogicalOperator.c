#include<stdio.h>

int main()
{
	int x;
	x=5>4;
	printf("%d\n",x) ;
	x=5<4;
	printf("%d\n",x) ;
	x=!(5>4);
	printf("%d\n",x) ;
	x=!5>4;
	printf("%d\n",x) ;
	x=!-97>=0;
	printf("%d\n",x);
	printf("\n");
	
	x=3>10&&3<2;
	printf("%d\n",x);
	x=4>5&&10>2;
	printf("%d\n",x);
	x=5>4&&3>89;
	printf("%d\n",x);
	x=6>3&&3>1;
	printf("%d\n",x);
	printf("\n");
	
	x=3>10||3<2;
	printf("%d\n",x);
	x=4>5||10>2;
	printf("%d\n",x);
	x=5>4||3>89;
	printf("%d\n",x);
	x=6>3||3>1;
	printf("%d\n",x);
	
	return 0;
}
