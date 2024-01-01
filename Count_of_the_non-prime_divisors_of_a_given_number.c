#include<stdio.h>
int isprime(int n)
{
    int flag=1;
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        return flag;
    }
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && !isprime(i))
        c++;
    }
    printf("%d",c);
    return 0;
}
