#include<stdio.h>
main()
{ 
    int i,j,a;
    printf("enter value:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    { 
        for(j=1;j<=i;j++)
        { 
            printf("*",i);
        }
        printf("\n");
    }
}