#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n=='V')
    {
        printf("Violet");
    }
    else if(n=='i')
    {
        printf("indigo");
    }
    else if(n=='B')
    {
        printf("Blue");
    }
    else if(n=='G')
    {
        printf("Green");
    }
    else if(n=='Y')
    {
        printf("Yellow");
    }
    else if(n=='O')
    {
        printf("Orange");
    }
    else if(n=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}