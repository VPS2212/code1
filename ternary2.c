#include<stdio.h>
int main()
{
	int a,b,e,f;
	scanf("%d%d",&a,&b);
	int c=(a<b)? printf("A is less then B Value\n"):printf("A is NOT Less then B \n");
	scanf("%d%d",&e,&f);
	int d=(e>f)? printf("e is greater then f\n",): printf("E is Not Greater then f\n");
	return 0;
}
