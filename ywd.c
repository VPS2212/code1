#include<stdio.h>
int main()
{
    int a,weeks,days;
    float year;
    printf("Enter the number of Day:");
    scanf("%d",&a);
    year=a/365;
    printf("Year %f\n",year);
    weeks=(a%365)/7;
    printf("Weeks: %d\n",weeks);
    days=a-((year*365)+(weeks*7));
    printf("Days: %d\n",days);
    return 0;
}
