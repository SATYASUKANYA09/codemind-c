#include<stdio.h>
int main()
{
    int i,a,b,x=0,y=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<a;i++)
    {
        if(a % i == 0)
        {
            x= x + i;
        }
    }
    for(int i=1;i<b;i++)
    {
        if(b % i == 0)
        {
            y= y + i;
        }
    }
    if((a == y) && (b == x))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}