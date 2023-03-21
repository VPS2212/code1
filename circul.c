#include<stdio.h>
int main()
{
    float r,a,c,d;
    printf("Enter the Radius of the circle: ");
    scanf("%f",&r);
    a=3.14*r;
    printf("Area of the circle a= %.2f sq.units \n",a);
    c=2*3.14*r;
    printf("Circumference of the circle c=%.2f unit\n  ",c);
    d=2*r;
    printf("Diameter of the circle d= %.2f units \n",d);
    return 0;
}
