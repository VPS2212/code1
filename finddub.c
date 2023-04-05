#include<stdio.h>
int main()
{
	int ar[20];
	int i,j,d=1,n;
	printf("Enter Number of emelmnt [LIMIT 0 TO 19]\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the index :\n");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		{
			for(j=i+1;j<n;j++)
			{
				{
					if(ar[i]==ar[j])
					{
						printf("Duplicate index : %d\n",ar[j]);
						ar[j]=ar[j+1];
					}
			        }
		        }
         	}     
	}
	return 0;
}

