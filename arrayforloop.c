#include<stdio.h>
int main()
{
	int i,n,sum=0,j,d=1,m=1;
	int ar1[100];
	int ar2[100];
	int ar3[100];
	printf("Select the number of elements to store value in ar1\n");
	scanf("%d",&n);
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		printf("ar1[%d]:\n",i);
		scanf("%d",&ar1[i]);  //get input form user and stored in array element 
	}
	for(i=0;i<n;i++)
	{
	printf("Elements in the array %d\n",ar1[i]); // print the array elements value 
	}
	for(i=0;i<n;i++)
	{
		ar2[i]=ar1[i]; // copy the data to ar1 to ar2 
	}
	for(i=0;i<n;i++)
	{
		printf("Elements copy to ar2 %d\n",ar2[i]);//print ar2 elements value
	}
	for(i=0;i<n;i++)
	{
		sum=sum+ar1[i]; // add the array elements value 
	}
	printf("ar1 Sum the element value %d \n",sum);
	for(i=0;i<n;i++)
	{
		d=0;	
		for(j=0;j<n;j++)
		{
		if(ar1[i]==ar2[j])
		{
		d=d+j;
		printf("%d element have deblicate number:%d (count:%d) \n",i,ar2[j],d);
		}
		}

	}

	return 0;
}
	
	
