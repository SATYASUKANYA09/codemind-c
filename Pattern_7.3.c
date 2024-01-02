#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("
");
        }
       return 0;
}