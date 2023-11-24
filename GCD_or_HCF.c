#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(n!=m)
    {
        if(n>m)
        n-=m;
        else
        m-=n;
    }
    printf("%d",n);
}