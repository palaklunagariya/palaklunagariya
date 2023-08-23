#include<stdio.h>
main()
{ 
    int a;
    printf("enter parentage:");
    scanf("%d",&a);
    if(a<35)
    { 
        printf("fail");
    }
    else if(a>=35 && a<50)
    { 
        printf("pass");
    }
    else if(a>=50 && a<60)
    { 
        printf("second");
    }
    else if(a>=60 && a<75)
    { 
        printf("first calss");
    }
    else if(a>=75 && a<100)
    { 
        printf("destination");
    }
}