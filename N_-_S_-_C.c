#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    i=a+1;
    while(i<b)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
        i++;
    }
}