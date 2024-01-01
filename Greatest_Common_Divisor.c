#include<stdio.h>
int main()
{
    int a,b,hcf=0;
    scanf("%d%d",&a,&b);
    int min = (a>b)?b:a;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    printf("%d",hcf);
}