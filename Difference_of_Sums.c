#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,sq=0,temp=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=pow(i,2);
        sq+=i;
    }
    int r;
    r=abs(sum-pow(sq,2));
    printf("%d",r);
    return 0;
}