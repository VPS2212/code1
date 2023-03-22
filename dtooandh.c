#include<stdio.h>
int main()
{
	int a,b,d,o,r,h,r2;
	printf("Enter the Decimal Number");
	scanf("%d",&d);
	a=d;
	b=d;
	for(a=d;d!=0;d/=8)
	{
		r=d%8;
		o=r;
		printf("Octal Number%o \n",o);
	}	
d=b;
	for(b=d;d!=0;d/=16)
	{	
		r2=d%16;
		h=r2;
		printf("Hexadecimal is :%x\n",h);
	}

	return 0;
}


