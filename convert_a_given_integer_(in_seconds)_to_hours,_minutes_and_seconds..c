#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a,&b);
    printf("H:M:S-%d:",a/3600);
    b=a%3600;
    printf("%d:%d",b/60,b%60);
}