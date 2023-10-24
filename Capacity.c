#include<stdio.h>
int main()
{
    int t,s,b,kb;
    scanf("%d%d%d",&t,&s,&b);
    kb=((500*b*s*t*2/1000));
    printf("%d KB",kb);
}