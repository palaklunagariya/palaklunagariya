#include<stdio.h>
int main()
{ 
    float p,r,t,si;
    printf("enter value of principal:");
    scanf("%f",&p);
    printf("enter value of reat of interest:");
    scanf("%f",&r);
    printf("enter value of time:");
    scanf("%f",&t);


    si=(p*r*t)/100;
    printf("interest is=%f",si);

}