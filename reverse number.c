#include<stdio.h>
int main()
{ 
    int n,r=0;
    printf("enter the number:\n");
    scanf("%d",&n);
    while(n!=0)
    { 
        r-r*10;
        r=r+n%10;
        n=n/10;
    }
    printf("reverse of the number=%d\n",r);
    
}