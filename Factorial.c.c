#include<stdio.h>
int main()
{
    int a,b=1,n; // three variable used a for get input, b used to multiply ,n for loop.
    printf("Enter the number:");
    scanf("%d",&a);//user input
    for(n=1;n<=a;n++)// assign n=1, then n value increment till 'a' value and loop will end
    {
    b=b*n; //n value multiply with b value, until n<=a . b*n result is stored as b value.
    printf("The Value of b:%d\n",b); //for my reference print the every loop value of 'b'
    }
    printf("The Factorial Number a:%d\n",b);
    return 0;
}
