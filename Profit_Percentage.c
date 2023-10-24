#include<stdio.h>
int main()
{
    float x,y,a,c;
    scanf("%d%d",&x,&y);
    a=y-x;
    c=((a*100)/x);
    printf("%.2f",c);
}