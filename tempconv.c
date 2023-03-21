#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the Celsius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Fahrenheit %2.f\n",f);
    return 0;

}
