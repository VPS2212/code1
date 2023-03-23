#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("Enter Number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>b)
		big=a;
		else
		big=b;
	}
	else
	{
		if(b>c)
		big=b;
		else
		big=c;
	}
	printf("Big Value is:%d\n",big);
	return 0;
}
