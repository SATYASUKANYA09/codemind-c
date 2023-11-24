#include<stdio.h>
int main()
{
    int N,sum=0,L,F;
    scanf("%d",&N);
    L=N%10;
    while(N>=10)
    {
        N=N/10;
    }
    F=N;
    sum=F+L;
    printf("%d",sum);
}