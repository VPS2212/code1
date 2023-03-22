#include<stdio.h>
#include<math.h>
int main ()
{
    int pi,t,m;
    float ci,i;
    printf("Enter the principal:\n ");
    scanf("%d",&pi);
    printf("Enter the Interest\n");
    scanf("%f",&i);
    printf("Enter the Term Of year:\n");
    scanf("%d",&t);
    ci=pi*pow((1+i/100),t); /*i learn how to use pow () function,(p*(1+r/100)^t)*/
    printf("Per year Compound  Interest: %.2f\n",ci);
    m=t*12;
    /*printf("m=%d\n",m);*/
    ci=ci/m;
    printf("Per Month Compound interest:%.2f",ci);
    return 0;
    }
